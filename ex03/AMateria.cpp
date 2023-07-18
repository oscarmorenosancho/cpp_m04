/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 18:22:07 by omoreno-          #+#    #+#             */
/*   Updated: 2023/07/18 18:29:39 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "AMateria.hpp"

AMateria(std::string const & materiaType) : materiaType(materiaType)
{
}

AMateria(const AMateria& b)
{

}

std::string const & AMateria::getType() const
{
	return (materiaType);
}