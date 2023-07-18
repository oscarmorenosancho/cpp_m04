/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 12:12:33 by omoreno-          #+#    #+#             */
/*   Updated: 2023/07/18 13:58:37 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
	const Animal* k = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	k->makeSound();
	j->makeSound();
	i->makeSound();
	std::cout << *k; 
	std::cout << *j; 
	std::cout << *i; 
	delete i;
	delete j;
	return 0;
}