/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 18:22:07 by omoreno-          #+#    #+#             */
/*   Updated: 2023/07/19 14:00:16 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : type(type)
{
	std::cout << "AMateria constructor called";
	std::cout << std::endl;
}

AMateria::AMateria(const AMateria& b)
{
	std::cout << "AMateria copy constructor called";
	std::cout << std::endl;
	*this = *(b.clone());
}

AMateria& AMateria::operator=(const AMateria& b)
{
	*this = *(b.clone());
	std::cout << "Ice copy assignment operator called";
	std::cout << std::endl;
	return (*this);
}

std::string const & AMateria::getType() const
{
	return (type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "AMateria: * does undefined behavior to ";
	std::cout << target.getName () << " *";
	std::cout << std::endl;
}
