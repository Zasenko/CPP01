/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzasenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 10:48:50 by dzasenko          #+#    #+#             */
/*   Updated: 2025/06/27 10:48:51 by dzasenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Editor.hpp"
#include <iostream>
#include <fstream> 

int main(int ac, char *av[]) {
    if (ac != 4) {
        std::cout << "Wrong number of arguments!\n";
        return 0;
    }
    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
    //trim + empty ?

    

    Editor editor = Editor(filename, s1, s2);

    std::ifstream infile;
    infile.open(av[1]);
    if (!infile.is_open()) {
        std::cout << "Could not open the file\n";
        return 0;
    }

    std::string testS1;
    std::string testS2;


    while (std::getline (infile, testS2)) {
        std::string nl = testS1.empty() ? "" : "\n";
        testS1 = testS1 + nl + testS2;
    }
    if (infile.eof()) {
        std::cout << "infile eof\n";
        // std::cout << "[" << testS1 << "]" << std::endl;
    } else if (infile.fail()) {
        std::cout << "infile fail\n";
        //infile.close();
    } else {
        std::cout << "undefinded error\n";
        //infile.close();
    }

    infile.close();

    
    std::ofstream MyFile("111111.txt");
    if (!MyFile.is_open()) {
        std::cout << "Could not open the 2 file\n";
        return 0;
    }

    int i = 0;

    int s1_size = s1.length();
    int p = testS1.find_first_of(s1, i);


    while(testS1[i]) {
        if (p != -1 && i <= p) {
            while(testS1[i] && i < p) {
                MyFile << testS1[i];
                i++;
            }
            MyFile << s2;
            i = i + s1_size;
            p = testS1.find_first_of(s1, i);
        }
        else {
            MyFile << testS1[i];
            i++;
        }
    }
    MyFile.close();
    return 0;
}