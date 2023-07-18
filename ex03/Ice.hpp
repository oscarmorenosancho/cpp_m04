/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 17:51:27 by omoreno-          #+#    #+#             */
/*   Updated: 2023/07/18 18:12:04 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ICE_HPP__
#define __ICE_HPP__

# include <string>
# include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice();
	Ice(const Ice& b);
	Ice(const AMateria& b);
	virtual ~Ice();
	Ice& operator=(const AMateria& b);
	Ice& operator=(const Ice& b);
	std::string const & getType() const; //Returns the materia type
	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif //__ICE_HPP__