/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 15:43:18 by omoreno-          #+#    #+#             */
/*   Updated: 2023/07/14 13:16:28 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "Dog constructor called";
	std::cout << std::endl;
}

Dog::Dog(const Dog& b)
{
	(void) b;
	type = "Dog";
	std::cout << "Dog copy constructor called";
	std::cout << std::endl;
}

Dog& Dog::operator=(const Dog& b)
{
	(void) b;
	type = "Dog";
	std::cout << "Dog copy assignment operator called";
	std::cout << std::endl;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called for ";
}

void Dog::makeSound() const
{
	std::cout << "wow...!";
	std::cout << std::endl;
}
std::string Dog::getType() const
{
	return (type);
}

std::ostream& operator<<(std::ostream& os, const Dog& dog)
{
	os << dog.getType();
	return (os);
}
