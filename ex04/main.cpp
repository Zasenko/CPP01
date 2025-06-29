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

int main(int ac, char *av[]) {

    if (ac != 4) {
        std::cout << "Wrong number of arguments!\n";
        return 0;
    }

    Editor editor = Editor(av[1], av[2], av[3]);
    editor.edit();
    return 0;
}