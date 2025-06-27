/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzasenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 14:00:40 by dzasenko          #+#    #+#             */
/*   Updated: 2025/06/26 14:00:42 by dzasenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon {
    public:
        Weapon();
        Weapon(std::string type);
        ~Weapon();
        const std::string getType();
        void setType(std::string type);
    private:
        std::string type;
};

#endif