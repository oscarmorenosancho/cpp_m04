/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 16:46:37 by omoreno-          #+#    #+#             */
/*   Updated: 2023/07/19 12:56:38 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AMATERIA_HPP__
#define __AMATERIA_HPP__

# include <string>
# include "ICharacter.hpp"

class AMateria
{
protected:
	const std::string type;
public:
	AMateria(std::string const & type);
	AMateria(const AMateria& b);
	virtual ~AMateria() = 0;
	AMateria& operator=(const AMateria& b);
	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif //__AMATERIA_HPP__