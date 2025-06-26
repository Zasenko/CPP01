/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzasenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 13:59:18 by dzasenko          #+#    #+#             */
/*   Updated: 2025/06/26 13:59:20 by dzasenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) {
    this->name = name;
    this->weapon = weapon;
}

HumanA::~HumanA() {}

void HumanA::attack() {
    std::cout   << this->name
                << " attacks with their "
                << this->weapon.getType()
                << std::endl;
}