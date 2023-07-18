/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 15:43:18 by omoreno-          #+#    #+#             */
/*   Updated: 2023/07/18 11:16:39 by omoreno-         ###   ########.fr       */
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
	std::cout << "Animal undefined does not make sound";
	std::cout << std::endl;
}
std::string Animal::getType() const
{
	return type;
}

std::ostream& operator<<(std::ostream& os, const Animal& animal)
{
	os << animal.getType();
	return (os);
}
