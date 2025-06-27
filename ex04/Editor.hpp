/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Editor.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzasenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 11:40:19 by dzasenko          #+#    #+#             */
/*   Updated: 2025/06/27 11:40:21 by dzasenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EDITOR_HPP
#define EDITOR_HPP

#include <iostream>

class Editor {
    public:
        Editor(
            std::string filename,
            std::string s1,
            std::string s2
        );
        ~Editor();
    private:
        std::string _filename;
        std::string _s1;
        std::string _s2;
};

#endif