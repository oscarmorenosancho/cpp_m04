/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 12:12:33 by omoreno-          #+#    #+#             */
/*   Updated: 2023/07/18 16:39:44 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		j->makeSound();
		i->makeSound();
		std::cout << *j; 
		std::cout << *i; 
		delete i;
		delete j;
		// When trying to instantiate Animal the compiler will fail
		// const Animal* k = new Animal();
		// k->makeSound();
		// std::cout << *k; 
		// delete k;
		std::cout << std::endl << "End of first testing block";
		std::cout << std::endl << std::endl; 
	}
	{
		Animal* animals[4];
		for (int i = 0; i < 4; i++)
		{
			if (i % 2)
				animals[i] = new Dog;
			else
				animals[i] = new Cat;
		}
		for (int i = 0; i < 4; i++)
		{
			animals[i]->makeSound();
			std::cout << *animals[i];
		}
		for (int i = 0; i < 4; i++)
			delete animals[i];
		std::cout << std::endl << "End of second testing block";
		std::cout << std::endl << std::endl; 
	}
	return 0;
}