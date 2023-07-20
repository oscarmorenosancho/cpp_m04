/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 17:05:50 by omoreno-          #+#    #+#             */
/*   Updated: 2023/07/20 12:34:31 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MATERIASOURCE_HPP__
#define __MATERIASOURCE_HPP__
#define INVENTORY_SIZE 4

# include <string>
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria* inventory[INVENTORY_SIZE];
	void resetInventory();
	int findEmptyInventorySlot() const;
	int lookForMateria(std::string const & type) const;
	void cloneInventory(const MateriaSource& ms);
	void destroyInventory();
public:
	MateriaSource();
	~MateriaSource();
	MateriaSource(const MateriaSource& b);
	MateriaSource& operator=(const MateriaSource& b);
	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
};

#endif //__MATERIASOURCE_HPP__