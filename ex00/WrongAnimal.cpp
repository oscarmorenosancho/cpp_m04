/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 12:11:06 by omoreno-          #+#    #+#             */
/*   Updated: 2023/07/18 14:09:19 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "WrongAnimal";
	std::cout << "WrongAnimal constructor called";
	std::cout << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& b)
{
	(void)b;
	type = "WrongAnimal";
	std::cout << "WrongAnimal copy constructor called";
	std::cout << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& b)
{
	(void)b;
	type = "WrongAnimal";
	std::cout << "WrongAnimal copy assignment operator called";
	std::cout << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called";
	std::cout << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "Unspecified WrongAnimal does not make sound";
	std::cout << std::endl;
}
std::string WrongAnimal::getType() const
{
	return type;
}

std::ostream& operator<<(std::ostream& os, const WrongAnimal& animal)
{
	os << animal.getType();
	return (os);
}
