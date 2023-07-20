/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 18:03:07 by omoreno-          #+#    #+#             */
/*   Updated: 2023/07/20 12:18:30 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}
Ice::Ice(const Ice& b) : AMateria("ice")
{
	*this = b;
}

Ice::Ice(const AMateria& b) : AMateria("ice")
{
	*this = *(b.clone());
	*this = b;
}

Ice::~Ice()
{
}

Ice& Ice::operator=(const AMateria& b)
{
	Ice temp(b);
	return (*((Ice *)temp.clone()));
}

Ice& Ice::operator=(const Ice& b)
{
	return (*((Ice *)b.clone()));
}

AMateria* Ice::clone() const
{
	AMateria *dup = new Ice();
	return (dup);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at ";
	std::cout << target.getName() << " *";
	std::cout << std::endl;
}
