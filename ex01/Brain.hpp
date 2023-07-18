/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 12:11:55 by omoreno-          #+#    #+#             */
/*   Updated: 2023/07/18 13:44:06 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BRAIN_HPP__
#define __BRAIN_HPP__

# include <string>

class Brain
{
private:
	std::string ideas[100];

public:
	Brain(const std::string* ideas);
	Brain(const Brain& b);
	~Brain();
	Brain& operator=(const Brain& b);
	void displayIdeas(std::ostream& os) const;
};

std::ostream& operator<<(std::ostream& os, const Brain& brain);

#endif //__BRAIN_HPP__