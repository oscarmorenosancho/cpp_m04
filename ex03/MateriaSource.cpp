/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 16:32:16 by omoreno-          #+#    #+#             */
/*   Updated: 2023/07/19 17:11:01 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	resetInventory();
	std::cout << "MateriaSource constructor called";
	std::cout << std::endl;
}

MateriaSource::~MateriaSource()
{
	destroyInventory();
	std::cout << "MateriaSource destructor called";
	std::cout << std::endl;
}

MateriaSource::MateriaSource(MateriaSource& b)
{
	cloneInventory(b);
	std::cout << "MateriaSource copy constructor called";
	std::cout << std::endl;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& b)
{
	cloneInventory(b);
	std::cout << "MateriaSource copy assignment operator called";
	std::cout << std::endl;
	return (*this);
}

void MateriaSource::learnMateria(AMateria* materia)
{
	int slot = findEmptyInventorySlot();
	if (slot)
		inventory[slot] = materia; 
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int idx = lookForMateria(type);
	if (idx)
		return (inventory[idx]->clone());
	return (nullptr);
}

void MateriaSource::resetInventory()
{
	std::cout << "MateriaSource constructor called";
	std::cout << std::endl;
	for (int i = 0; i < INVENTORY_SIZE; i++)
		inventory[i] = nullptr;
}

int MateriaSource::findEmptyInventorySlot() const
{
	int i = 0;
	while (i < INVENTORY_SIZE)
	{
		if (inventory[i])
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
		if (inventory[i]->getType() == type)
			return (i);
		i++;
	}
	return (-1);
}

void MateriaSource::cloneInventory(const MateriaSource& ms)
{
	for (int i = 0; i < INVENTORY_SIZE; i++)
		inventory[i] = ms.inventory[i];
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
