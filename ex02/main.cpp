/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzasenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 13:17:45 by dzasenko          #+#    #+#             */
/*   Updated: 2025/06/26 13:17:47 by dzasenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void) {

    std::string s = "HI THIS IS BRAIN";
    std::string *stringPTR = &s;
    std::string &stringREF = s;

    std::cout << "The memory address of the string variable: " << &s << std::endl;
    std::cout << "The memory address held by stringPTR: " << stringPTR << std::endl;
    std::cout << "The memory address held by stringREF: "<< &stringREF << std::endl;
    std::cout << "The value of the string variable: " << s << std::endl;
    std::cout << "The value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF: " << stringREF << std::endl;
    
    return 0;
}