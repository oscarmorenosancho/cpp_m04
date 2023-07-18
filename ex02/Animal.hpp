/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 12:11:48 by omoreno-          #+#    #+#             */
/*   Updated: 2023/07/18 15:57:39 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_HPP__
#define __ANIMAL_HPP__

# include <string>

class Animal
{
protected:
	std::string type;

public:
	Animal();
	Animal(const Animal& b);
	virtual ~Animal();
	Animal& operator=(const Animal& b);
	virtual void makeSound() const = 0;
	virtual void displayStatus(std::ostream& os) const = 0;
	virtual std::string getType() const = 0;
};

std::ostream& operator<<(std::ostream& os, const Animal& ct);

#endif //__ANIMAL_HPP__