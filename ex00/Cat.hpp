/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 12:10:40 by omoreno-          #+#    #+#             */
/*   Updated: 2023/07/18 12:10:42 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_HPP__
#define __CAT_HPP__

# include <string>
# include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat();
	Cat(const Cat& b);
	~Cat();
	Cat& operator=(const Cat& b);
	void makeSound() const;
	std::string getType() const;
};

std::ostream& operator<<(std::ostream& os, const Cat& ct);

#endif //__CAT_HPP__