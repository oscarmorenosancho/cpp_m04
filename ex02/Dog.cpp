/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 12:12:20 by omoreno-          #+#    #+#             */
/*   Updated: 2023/07/18 14:05:34 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "Dog constructor called";
	std::cout << std::endl;
	std::string ideas[100];
	for (int i = 0; i < 100; i++)
		ideas[i] = "Dog idea number " + std::to_string(i);
	brain = new Brain(ideas);
}

Dog::Dog(const Dog& b)
{
	type = "Dog";
	std::cout << "Dog copy constructor called";
	std::cout << std::endl;
	brain = new Brain(*(b.brain));
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
	std::cout << "Dog destructor called";
	std::cout << std::endl;
	delete brain;
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

void Dog::displayStatus(std::ostream& os) const
{
	os << "This " << getType() << " has a brain with those ideas" << std::endl;
	os << *brain;
}

std::ostream& operator<<(std::ostream& os, const Dog& dog)
{
	dog.displayStatus(os);
	return (os);
}
