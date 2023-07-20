/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 18:22:07 by omoreno-          #+#    #+#             */
/*   Updated: 2023/07/20 12:16:48 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : type(type)
{
}

AMateria::AMateria(const AMateria& b)
{
	*this = b;
}

AMateria& AMateria::operator=(const AMateria& b)
{
	std::cout << std::endl;
	return (*(b.clone()));
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
