/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 12:12:33 by omoreno-          #+#    #+#             */
/*   Updated: 2023/07/20 12:57:49 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

int main() {
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	IMateriaSource* srcB = new MateriaSource(*(MateriaSource *)src);

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = srcB->createMateria("cure");
	me->equip(tmp);

	ICharacter* oscar = new Character(*(Character *)me);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	oscar->use(0, *bob);
	oscar->use(1, *bob);
	delete bob;
	delete oscar;
	delete me;
	delete src;
	delete srcB;
	return 0; 
}