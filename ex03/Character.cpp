/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 13:00:31 by omoreno-          #+#    #+#             */
/*   Updated: 2023/07/19 13:07:14 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(const std::string name) : name(name)
{

}

Character::~Character()
{}

std::string const & Character::getName() const
{
	return (name);
}

void Character::equip(AMateria* m)
{}

void Character::unequip(int idx)
{}

void Character::use(int idx, ICharacter& target)
{}

void Character::resetInventory()
{
	for (int i = 0; i < 4; i++)
		inventory[i] = nullptr;
}
