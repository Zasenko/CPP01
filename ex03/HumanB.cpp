/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzasenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 13:59:53 by dzasenko          #+#    #+#             */
/*   Updated: 2025/06/26 13:59:54 by dzasenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name, Weapon &weapon) {
    this->name = name;
    this->weapon = weapon;
}

HumanB::~HumanB() {}

void HumanB::attack() {
    std::cout   << this->name
                << " attacks with their "
                << this->weapon.getType()
                << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {
    this->weapon = weapon;
}