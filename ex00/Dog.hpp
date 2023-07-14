
#ifndef __DOG_HPP__
#define __DOG_HPP__

# include <string>
# include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog();
	Dog(const Dog& b);
	~Dog();
	Dog& operator=(const Dog& b);
	void makeSound() const;
	virtual std::string getType() const;
};

std::ostream& operator<<(std::ostream& os, const Dog& ct);

#endif //__DOG_HPP__