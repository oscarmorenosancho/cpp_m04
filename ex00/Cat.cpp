/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 15:43:18 by omoreno-          #+#    #+#             */
/*   Updated: 2023/07/18 11:16:52 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "Cat constructor called";
	std::cout << std::endl;
}

Cat::Cat(const Cat& b)
{
	(void)b;
	type = "Cat";
	std::cout << "Cat copy constructor called";
	std::cout << std::endl;
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

std::ostream& operator<<(std::ostream& os, const Cat& cat)
{
	os << cat.getType();
	return (os);
}
