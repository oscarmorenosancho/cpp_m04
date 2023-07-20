/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 14:01:01 by omoreno-          #+#    #+#             */
/*   Updated: 2023/07/20 12:18:05 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}
Cure::Cure(const Cure& b) : AMateria("cure")
{
	*this = b;
}

Cure::Cure(const AMateria& b) : AMateria("cure")
{
	*this = b;
}

Cure::~Cure()
{
}

Cure& Cure::operator=(const AMateria& b)
{
	Cure temp(b);
	return (*((Cure *)temp.clone()));
}

Cure& Cure::operator=(const Cure& b)
{
	return (*((Cure *)b.clone()));
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
