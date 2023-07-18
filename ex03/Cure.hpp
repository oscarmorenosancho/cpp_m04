/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 17:55:50 by omoreno-          #+#    #+#             */
/*   Updated: 2023/07/18 18:12:11 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CURE_HPP__
#define __CURE_HPP__

# include <string>
# include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure();
	Cure(const Cure& b);
	Cure(const AMateria& b);
	virtual ~Cure();
	Cure& operator=(const AMateria& b);
	Cure& operator=(const Cure& b);
	std::string const & getType() const; //Returns the materia type
	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif //__CURE_HPP__