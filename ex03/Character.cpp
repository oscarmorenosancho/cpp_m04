/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 13:00:31 by omoreno-          #+#    #+#             */
/*   Updated: 2023/07/20 12:15:47 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(const std::string name) : name(name)
{
	resetInventory();
}

Character::~Character()
{
	destroyInventory();
}

std::string const & Character::getName() const
{
	return (name);
}

void Character::equip(AMateria* m)
{
	int slot = findEmptyInventorySlot();
	if (slot >= 0)
		inventory[slot] = m;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < INVENTORY_SIZE)
		inventory[idx] = nullptr;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < INVENTORY_SIZE && inventory[idx])
		inventory[idx]->use(target);
}

void Character::resetInventory()
{
	for (int i = 0; i < INVENTORY_SIZE; i++)
		inventory[i] = nullptr;
}

int Character::findEmptyInventorySlot() const
{
	int i = 0;
	while (i < INVENTORY_SIZE)
	{
		if (!inventory[i])
			return (i);
		i++;
	}
	return (-1);
}

void Character::cloneInventory(const Character& ms)
{
	for (int i = 0; i < INVENTORY_SIZE; i++)
		inventory[i] = ms.inventory[i];
}

void Character::destroyInventory()
{
	for (int i = 0; i < INVENTORY_SIZE; i++)
	{
		if (inventory[i])
		{
			delete inventory[i];
			inventory[i] = nullptr;
		}
	}
}
