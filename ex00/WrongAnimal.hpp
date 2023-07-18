
#ifndef __WRONGANIMAL_HPP__
#define __WRONGANIMAL_HPP__

# include <string>

class WrongAnimal
{
protected:
	std::string type;

public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal& b);
	~WrongAnimal();
	WrongAnimal& operator=(const WrongAnimal& b);
	void makeSound() const;
	std::string getType() const;
};

std::ostream& operator<<(std::ostream& os, const WrongAnimal& ct);

#endif //__WRONGANIMAL_HPP__