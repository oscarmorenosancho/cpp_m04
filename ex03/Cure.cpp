/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 14:01:01 by omoreno-          #+#    #+#             */
/*   Updated: 2023/07/19 14:24:18 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure constructor called";
	std::cout << std::endl;
}
Cure::Cure(const Cure& b) : AMateria("cure")
{
	std::cout << "Cure copy constructor called";
	std::cout << std::endl;
}

Cure::Cure(const AMateria& b) : AMateria("cure")
{
	std::cout << "Cure copy constructor from abstract called";
	std::cout << std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure destructor called";
	std::cout << std::endl;
}

Cure& Cure::operator=(const AMateria& b)
{
	*this = *(b.clone());
	std::cout << "Cure copy assignment operator from abstract called";
	std::cout << std::endl;
	return (*this);
}

Cure& Cure::operator=(const Cure& b)
{
	*this = *(b.clone());
	std::cout << "Cure copy assignment operator called";
	std::cout << std::endl;
	return (*this);
}

AMateria* Cure::clone() const
{
	AMateria *dup = new Cure();
	return (dup);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName();
	std::cout << "’s wounds *";
	std::cout << std::endl;
}
