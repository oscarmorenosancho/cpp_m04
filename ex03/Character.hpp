/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 17:41:58 by omoreno-          #+#    #+#             */
/*   Updated: 2023/07/19 13:05:45 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CHARACTER_HPP__
#define __CHARACTER_HPP__

# include <string>
# include "AMateria.hpp"

class Character : public ICharacter
{
private:
	std::string	name;
	AMateria*	inventory[4];
	void resetInventory();
public:
	Character(const std::string name);
	~Character();
	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};
#endif //__CHARACTER_HPP__