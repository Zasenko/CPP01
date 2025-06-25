/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzasenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 11:19:33 by dzasenko          #+#    #+#             */
/*   Updated: 2025/06/25 11:19:34 by dzasenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
    this->name = name;
}

Zombie::~Zombie() {
    std::cout << this->name << ": deleted\n";
}

void Zombie::announce(void) {
    std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie* newZombie(std::string name) {
    Zombie *new_zombie = new Zombie(name);
    return new_zombie;
}

void randomChump(std::string name) {
    Zombie zombie(name);
    zombie.announce();
}