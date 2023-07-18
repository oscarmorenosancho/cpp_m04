
#ifndef __ANIMAL_HPP__
#define __ANIMAL_HPP__

# include <string>

class Animal
{
protected:
	std::string type;

public:
	Animal();
	Animal(const Animal& b);
	virtual ~Animal();
	Animal& operator=(const Animal& b);
	virtual void makeSound() const;
	std::string getType() const;
};

std::ostream& operator<<(std::ostream& os, const Animal& ct);

#endif //__ANIMAL_HPP__