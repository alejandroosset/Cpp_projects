#include "HumanB.hpp"

HumanB::HumanB(std::string name) : weapon(NULL), name(name)
{
}

HumanB::~HumanB(void)
{
}

void HumanB::attack(void)
{
	if (this->weapon)
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}