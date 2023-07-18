/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 12:12:12 by omoreno-          #+#    #+#             */
/*   Updated: 2023/07/18 13:42:56 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_HPP__
#define __CAT_HPP__

# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain* brain;
public:
	Cat();
	Cat(const Cat& b);
	~Cat();
	Cat& operator=(const Cat& b);
	void makeSound() const;
	void displayStatus(std::ostream& os) const;
	std::string getType() const;
};

std::ostream& operator<<(std::ostream& os, const Cat& ct);

#endif //__CAT_HPP__