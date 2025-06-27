/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzasenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 14:00:33 by dzasenko          #+#    #+#             */
/*   Updated: 2025/06/26 14:00:35 by dzasenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
    this->type = type;
}

Weapon::Weapon() {}

Weapon::~Weapon() {}

const std::string Weapon::getType() {
    return this->type;
}

void Weapon::setType(std::string type) {
    this->type = type;
}