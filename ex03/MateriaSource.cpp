/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 16:32:16 by omoreno-          #+#    #+#             */
/*   Updated: 2023/07/20 12:43:50 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	resetInventory();
}

MateriaSource::~MateriaSource()
{
	destroyInventory();
}

MateriaSource::MateriaSource(const MateriaSource& b)
{
	cloneInventory(b);
}

MateriaSource& MateriaSource::operator=(const MateriaSource& b)
{
	cloneInventory(b);
	return (*this);
}

void MateriaSource::learnMateria(AMateria* materia)
{
	int slot = findEmptyInventorySlot();
	if (slot >= 0)
		inventory[slot] = materia; 
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int idx = lookForMateria(type);
	if (idx >= 0)
		return (inventory[idx]->clone());
	return (nullptr);
}

void MateriaSource::resetInventory()
{
	for (int i = 0; i < INVENTORY_SIZE; i++)
		inventory[i] = nullptr;
}

int MateriaSource::findEmptyInventorySlot() const
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

int MateriaSource::lookForMateria(std::string const & type) const
{
	int i = 0;
	while (i < INVENTORY_SIZE)
	{
		if (inventory[i] && inventory[i]->getType() == type)
			return (i);
		i++;
	}
	return (-1);
}

void MateriaSource::cloneInventory(const MateriaSource& ms)
{
	for (int i = 0; i < INVENTORY_SIZE; i++)
	{
		if (ms.inventory[i])
			inventory[i] = ms.inventory[i]->clone();
		else
			inventory[i] = nullptr;
	}
}

void MateriaSource::destroyInventory()
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
