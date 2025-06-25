/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzasenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 10:53:34 by dzasenko          #+#    #+#             */
/*   Updated: 2025/06/25 10:53:36 by dzasenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {

    Zombie *zombie = newZombie("Dima");
    if (!zombie)
        return 1;
    zombie->announce();
    randomChump("Karl");
    delete zombie;
    return 0;
}