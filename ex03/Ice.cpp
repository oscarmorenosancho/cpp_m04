/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 18:03:07 by omoreno-          #+#    #+#             */
/*   Updated: 2023/07/18 18:32:35 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}
Ice::Ice(const Ice& b) : AMateria("ice")
{

}

Ice::Ice(const AMateria& b) : AMateria(b.getType())
{

}

Ice::~Ice()
{

}

Ice& Ice::operator=(const AMateria& b)
{
	(void)b;
	std::cout << "Ice copy assignment operator from AMateria called";
	std::cout << std::endl;
	return (*this);
}

Ice& Ice::operator=(const Ice& b)
{
	(void)b;
	std::cout << "Ice copy assignment operator called";
	std::cout << std::endl;
	return (*this);
}

AMateria* Ice::clone() const
{

}

void Ice::use(ICharacter& target)
{

}
