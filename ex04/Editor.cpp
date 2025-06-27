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

Editor::Editor(std::string filename, std::string s1, std::string s2) {
    _filename = filename;
    _s1 = s1;
    _s2 = s2;
}

Editor::~Editor() {};