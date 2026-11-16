#include "PmergeMe.hpp"

// Funciones de la clase
PmergeMe::PmergeMe(int size)
{
    this->size = size;
}

PmergeMe::~PmergeMe()
{

}

//Funciones auxiliares
void PmergeMe::ParseInput(int ac, char *av[])
{
    char *endptr = NULL;
    long num;
    int i = 1;
    if(ac < 2)
        throw std::invalid_argument("Invalid number of arguments.");
    while (av[i])
    {
        num = strtol(av[i], &endptr, 10);
        if(*endptr)
            throw std::invalid_argument("The argument is not a number.");
        if(num < 0)
            throw std::invalid_argument("The numbers must be positive.");
        if(num > __INT_MAX__)
            throw std::invalid_argument("The number is outside int range.");
        i++;
    }
    if(ac == 2)
        throw std::invalid_argument("Invalid number of arguments.");
}

void PmergeMe::CreatePairs(char *av[])
{
    int i = 1;
    if(this->size % 2 != 0)
    {
        this->pend = std::atoi(av[this->size - 1]);
        this->size--;
    }
    
    while (i < size)
    {
        this->vec.push_back(std::make_pair(std::atoi(av[i]), std::atoi(av[i + 1])));
        i += 2;
    }
    
}

void PmergeMe::SortPairs()
{
    int tmp;
    for (size_t i = 0; i < this->vec.size(); i++)
    {
        if(this->vec[i].first > this->vec[i].second)
        {
            tmp = this->vec[i].first;
            this->vec[i].first = this->vec[i].second;
            this->vec[i].second = tmp;
        }
    }
}
void PmergeMe::PrintPairs()
{
    for (size_t i = 0; i < this->vec.size(); i++)
    {
        std::cout << this->vec[i].first << " " <<this->vec[i].second << std::endl;
    }

    std::cout << "The size of the vector is " << this->vec.size() << std::endl;
}