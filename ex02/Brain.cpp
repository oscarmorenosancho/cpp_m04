/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 12:17:54 by omoreno-          #+#    #+#             */
/*   Updated: 2023/07/18 16:23:16 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Brain.hpp"

Brain::Brain(const std::string* initial_ideas)
{
	for (int i = 0; i < 100; i++)
		ideas[i] = initial_ideas[i];
	std::cout << "Brain constructor called";
	std::cout << std::endl;
}
Brain::Brain(const Brain& b)
{
	for (int i = 0; i < 100; i++)
		ideas[i] = b.ideas[i];
	std::cout << "Brain copy constructor called";
	std::cout << std::endl;
}
Brain::~Brain()
{
	std::cout << "Brain destructor called";
	std::cout << std::endl;
}

Brain& Brain::operator=(const Brain& b)
{
	for (int i = 0; i < 100; i++)
		ideas[i] = b.ideas[i];
	std::cout << "Brain copy assignment operator called";
	std::cout << std::endl;
	return (*this);
}

void Brain::displayIdeas(std::ostream& os) const
{
	for (int i = 0; i < 100; i+=9)
		os << ideas[i] << std::endl;
	os << "displayed only one of every 9 ideas to avoid flooding the console" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Brain& brain)
{
	brain.displayIdeas(os);
	return (os);
}