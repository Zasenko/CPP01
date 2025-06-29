/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Editor.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzasenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 11:41:46 by dzasenko          #+#    #+#             */
/*   Updated: 2025/06/27 11:41:47 by dzasenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Editor.hpp"

Editor::Editor(char *filename, char *s1, char *s2)
{
    _filename = filename;
    _s1 = s1;
    _s2 = s2;
}

Editor::~Editor() {};

void Editor::edit() {

    std::ifstream file;

    file.open(_filename);
    if (!file.is_open()) {
        std::cout << "Could not open the file <" << _filename << ">\n";
        return;
    }

    std::ofstream new_file;
    std::string replace_file_name = _filename + ".replace";
    new_file.open(replace_file_name);
    if (!new_file.is_open())
    {
        file.close();
        std::cout << "Could not open or create output file <" << replace_file_name << ">\n";
        return;
    }

    std::ostringstream buffer;
    buffer << file.rdbuf();
    if (file.fail() && !file.eof())
    {
        file.close();
        new_file.close();
        std::cerr << "Could not read file <" << _filename << ">\n";
        return;
    }

    std::string file_text = buffer.str();

    int s1_length = _s1.length();
    int i = 0;
    int f = file_text.find(_s1, i);

    while (file_text[i])
    {
        if (f != -1 && i <= f)
        {
            while (file_text[i] && i < f)
            {
                new_file << file_text[i];
                i++;
            }
            new_file << _s2;
            i = i + s1_length;
            f = file_text.find(_s1, i);
        }
        else
        {
            new_file << file_text[i];
            i++;
        }
    }
    file.close();
    new_file.close();
}