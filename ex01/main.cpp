/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzasenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 12:32:28 by dzasenko          #+#    #+#             */
/*   Updated: 2025/06/26 12:32:29 by dzasenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    int N = 11;
    Zombie *arr = zombieHorde(N, "Karl");
    if (!arr) {
        return 1;
    }
    for (int i = 0; i < N; i++) {
        arr[i].announce();
    }
    delete [] arr;
    return 0;
}
