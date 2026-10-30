#include "PmergeMe.hpp"

// Funciones de la clase
PmergeMe::PmergeMe()
{

}

PmergeMe::~PmergeMe()
{

}
//Funciones auxiliares
void PmergeMe::ParseInput(int ac, char *av[])
{
    char *endptr = NULL;
    long tmp;
    int num;
    int i = 1;
    if(ac < 2)
        throw std::invalid_argument("Invalid number of arguments.");
    while (av[i])
    {
        tmp = strtol(av[i], &endptr, 10);
        if(*endptr)
            throw std::invalid_argument("The argument is not a number.");
        if(tmp < 0)
            throw std::invalid_argument("The numbers must be positive.");
        if(tmp > __INT_MAX__)
            throw std::invalid_argument("The number is outside int range.");
        num = static_cast<int>(tmp);
        this->vec.push_back(num);
        i++;
    }
}