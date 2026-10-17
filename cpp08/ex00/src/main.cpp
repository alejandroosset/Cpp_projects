#include "easyfind.hpp"

const char *NumberNotFoundException::what() const throw()
{
    return("The number is not in the array.\n");
}
int main()
{
    std::vector<int> v;
    for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
    try
    {
        std::cout << *easyFind(v, 7) << std::endl;
        std::cout << *easyFind(v, 11) << std::endl;
    }
    catch(std::exception &e)
    {
        std::cerr << e.what();
    }
    return(0);
}