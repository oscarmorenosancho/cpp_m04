/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 18:03:07 by omoreno-          #+#    #+#             */
/*   Updated: 2023/07/19 17:41:28 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice constructor called";
	std::cout << std::endl;
}
Ice::Ice(const Ice& b) : AMateria("ice")
{
	*this = *(b.clone());
	std::cout << "Ice copy constructor called";
	std::cout << std::endl;
}

Ice::Ice(const AMateria& b) : AMateria("ice")
{
	*this = *(b.clone());
	std::cout << "Ice copy constructor from abstract called";
	std::cout << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice destructor called";
	std::cout << std::endl;
}

Ice& Ice::operator=(const AMateria& b)
{
	*this = *(b.clone());
	std::cout << "Ice copy assignment operator from abstract called";
	std::cout << std::endl;
	return (*this);
}

Ice& Ice::operator=(const Ice& b)
{
	*this = *(b.clone());
	std::cout << "Ice copy assignment operator called";
	std::cout << std::endl;
	return (*this);
}

AMateria* Ice::clone() const
{
	AMateria *dup = new Ice();
	return (dup);
}

void Ice::use(ICharacter& target)
{
	std::cout << "Ice: * shoots an ice bolt at ";
	std::cout << target.getName() << " *";
	std::cout << std::endl;
}
