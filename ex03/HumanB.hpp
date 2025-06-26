/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzasenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 14:00:02 by dzasenko          #+#    #+#             */
/*   Updated: 2025/06/26 14:00:03 by dzasenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
    public:
        HumanB(std::string name, Weapon &weapon);
        ~HumanB();
        void attack();
        void setWeapon(Weapon &weapon);
    private:
        Weapon weapon;
        std::string name;
};

#endif