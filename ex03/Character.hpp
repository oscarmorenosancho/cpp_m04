/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 17:41:58 by omoreno-          #+#    #+#             */
/*   Updated: 2023/07/20 13:07:31 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CHARACTER_HPP__
#define __CHARACTER_HPP__
#define INVENTORY_SIZE 4

# include <string>
# include "AMateria.hpp"

class Character : public ICharacter
{
private:
	std::string	name;
	AMateria*	inventory[INVENTORY_SIZE];
	void resetInventory();
	int findEmptyInventorySlot() const;
	void cloneInventory(const Character& ms);
	void destroyInventory();
public:
	Character(const std::string name);
	~Character();
	Character(const Character& b);
	Character& operator=(const Character& b);
	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
	AMateria* getMateriaAt(int idx);
};
#endif //__CHARACTER_HPP__