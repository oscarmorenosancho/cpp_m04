/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 12:11:39 by omoreno-          #+#    #+#             */
/*   Updated: 2023/07/18 14:08:15 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"

Animal::Animal()
{
	type = "Animal";
	std::cout << "Animal constructor called";
	std::cout << std::endl;
}

Animal::Animal(const Animal& b)
{
	(void)b;
	type = "Animal";
	std::cout << "Animal copy constructor called";
	std::cout << std::endl;
}

Animal& Animal::operator=(const Animal& b)
{
	(void)b;
	type = "Animal";
	std::cout << "Animal copy assignment operator called";
	std::cout << std::endl;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor called";
	std::cout << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "Unspecified Animal does not make sound";
	std::cout << std::endl;
}
std::string Animal::getType() const
{
	return type;
}

void Animal::displayStatus(std::ostream& os) const
{
	os << "This unspecified "<< getType() << " don't have brain" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Animal& animal)
{
	animal.displayStatus(os);
	return (os);
}
