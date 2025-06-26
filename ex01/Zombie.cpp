/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzasenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 12:18:14 by dzasenko          #+#    #+#             */
/*   Updated: 2025/06/26 12:18:19 by dzasenko         ###   ########.fr       */
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

void Zombie::set_name(std::string name) {
    this->name = name;
}

Zombie::Zombie() {
    this->name = "";
}

Zombie* zombieHorde(int N, std::string name) {

    if (N < 1)
    {
        std::cout << "The number of zombies is less than 1!" << std::endl;
        return NULL;
    }
    if (name.empty())
    {
        std::cout << "Name is empty!" << std::endl;
        return NULL;
    }
    Zombie* arr = new Zombie[N];
    if (!arr)
    {
        std::cout << "Error malloc" << std::endl;
        return NULL;
    }
    for (int i = 0; i < N; i++) {
        arr[i].set_name(name);
    }
    return arr;
}