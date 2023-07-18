/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 12:11:25 by omoreno-          #+#    #+#             */
/*   Updated: 2023/07/18 12:11:27 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGCAT_HPP__
#define __WRONGCAT_HPP__

# include <string>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	WrongCat(const WrongCat& b);
	~WrongCat();
	WrongCat& operator=(const WrongCat& b);
	void makeSound() const;
	std::string getType() const;
};

std::ostream& operator<<(std::ostream& os, const WrongCat& ct);

#endif //__WRONGCAT_HPP__