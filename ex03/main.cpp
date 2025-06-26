/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzasenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 14:00:17 by dzasenko          #+#    #+#             */
/*   Updated: 2025/06/26 14:00:21 by dzasenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void) {
    
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
        }
        {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim", club);
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
        }


    return 0;
}
