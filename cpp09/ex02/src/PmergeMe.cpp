#include "PmergeMe.hpp"

// Constructors and destructors
PmergeMe::PmergeMe(int size)
{
    this->size = size;
}

PmergeMe::~PmergeMe()
{

}

//Auxiliar functions
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

// Vector functions
void PmergeMe::CreateVec(char *av[])
{
    int i = 1;
    int id = 1;

    while (i < this->size)
    {
        Element first;
        Element second;

        first.value = std::atoi(av[i]);
        first.id = id;
        second.value = std::atoi(av[i + 1]);
        second.id = id;

        this->vec.push_back(first);
        this->vec.push_back(second);

        i += 2;
        id++;
    }

    if (i <= this->size)
    {
        Element pend;
        pend.value = std::atoi(av[i]);
        pend.id = 0;
        this->vec.push_back(pend);
    }
}

void PmergeMe::SortPairs()
{
    for (size_t i = 0; i + 1 < this->vec.size(); i += 2)
    {
        if (this->vec[i].id == this->vec[i + 1].id
            && this->vec[i].value > this->vec[i + 1].value)
        {
            int tmp = this->vec[i].value;
            this->vec[i].value = this->vec[i + 1].value;
            this->vec[i + 1].value = tmp;
        }
    }
}

void PmergeMe::PrintPairs()
{
    for (size_t i = 0; i < this->vec.size(); i++)
        std::cout << this->vec[i].value << " id " << this->vec[i].id << std::endl;
}

static void SortWinners(std::vector<Element> &Winners)
{
    for(int i = 0; i < Winners.size(); i++)
    {
        if(Winners[i].value > Winners[i + 1].value)
        {
            Element tmp = Winners[i];
            Winners[i] = Winners[i + 1];
            Winners[i + 1] = tmp;
        }
    }
}
void PmergeMe::FordJohnsonVec()
{
    std::vector<Element> Winners;
    std::vector<Element> Loosers;
    int i = 0;

    while (i < this->size)
    {
        Loosers.push_back(this->vec[i]);
        Winners.push_back(this->vec[i + 1]);
        i += 2;
    }
    
}