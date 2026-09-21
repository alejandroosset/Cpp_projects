#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <iostream>
#include <cstdlib>
#include <ctime>
Base *generate(void)
{
    int r = (std::rand() % 3) + 1;
    switch (r)
    {
    case 1:
        std::cout << "A" << std::endl;
        return(new A);
    case 2:
        std::cout << "B" << std::endl;
        return(new B);
    case 3:
        std::cout << "C" << std::endl;
        return(new C);
    default:
        break;
    }
    return (new A);
}
void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}
void identify(Base& p)
{
    try
	{
		A &a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "A" << std::endl;
	}
	catch (std::exception &e) {}
	try
	{
		B &b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "B" << std::endl;
	}
	catch (std::exception &e) {}
	try
	{
		C &c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "C" << std::endl;
	}
	catch (std::exception &e) {}
}
int main()
{
    std::srand(std::time(0));
	Base *ptr = generate();
	Base &ref = *ptr;
	identify(ptr);
	identify(ref);
	delete ptr;
	return 0;
}