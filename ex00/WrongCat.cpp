/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 15:43:18 by omoreno-          #+#    #+#             */
/*   Updated: 2023/07/14 13:16:33 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "WrongCat constructor called";
	std::cout << std::endl;
}

WrongCat::WrongCat(const WrongCat& b)
{
	(void)b;
	type = "WrongCat";
	std::cout << "WrongCat copy constructor called";
	std::cout << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& b)
{
	(void)b;
	type = "WrongCat";
	std::cout << "WrongCat copy assignment operator called";
	std::cout << std::endl;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called";
	std::cout << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "Miau...!";
	std::cout << std::endl;
}

std::string WrongCat::getType() const
{
	return (type);
}

std::ostream& operator<<(std::ostream& os, const WrongCat& wrongCat)
{
	os << wrongCat.getType();
	return (os);
}
