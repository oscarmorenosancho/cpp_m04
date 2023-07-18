/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 12:12:26 by omoreno-          #+#    #+#             */
/*   Updated: 2023/07/18 13:43:05 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_HPP__
#define __DOG_HPP__

# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain* brain;
public:
	Dog();
	Dog(const Dog& b);
	~Dog();
	Dog& operator=(const Dog& b);
	void makeSound() const;
	void displayStatus(std::ostream& os) const;
	virtual std::string getType() const;
};

std::ostream& operator<<(std::ostream& os, const Dog& ct);

#endif //__DOG_HPP__