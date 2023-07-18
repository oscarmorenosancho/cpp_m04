/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 12:12:06 by omoreno-          #+#    #+#             */
/*   Updated: 2023/07/18 16:20:22 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "Cat constructor called";
	std::cout << std::endl;
	std::string ideas[100];
	for (int i = 0; i < 100; i++)
		ideas[i] = "Cat idea number " + std::to_string(i);
	brain = new Brain(ideas);
}

Cat::Cat(const Cat& b)
{
	type = "Cat";
	std::cout << "Cat copy constructor called";
	std::cout << std::endl;
	brain = new Brain(*(b.brain));
}

Cat& Cat::operator=(const Cat& b)
{
	(void)b;
	type = "Cat";
	std::cout << "Cat copy assignment operator called";
	std::cout << std::endl;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called";
	std::cout << std::endl;
	delete brain;
}

void Cat::makeSound() const
{
	std::cout << "Miau...!";
	std::cout << std::endl;
}

std::string Cat::getType() const
{
	return (type);
}

void Cat::displayStatus(std::ostream& os) const
{
	os << "This " << getType() << " has a brain with those ideas" << std::endl;
	os << *brain;
}

std::ostream& operator<<(std::ostream& os, const Cat& cat)
{
	cat.displayStatus(os);
	return (os);
}
