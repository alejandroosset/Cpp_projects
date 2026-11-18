#include "PmergeMe.hpp"

// Constructors and destructors
PmergeMe::PmergeMe(int size)
{
    this->size = size;
}

PmergeMe::~PmergeMe()
{

}

//External functions
static void SortEachPair(std::vector< std::pair<int, int> > &pairs)
{
    int tmp;

    for (size_t i = 0; i < pairs.size(); i++)
    {
        if (pairs[i].first > pairs[i].second)
        {
            tmp = pairs[i].first;
            pairs[i].first = pairs[i].second;
            pairs[i].second = tmp;
        }
    }
}

static void SortPairGroupsRecursive(std::vector< std::pair<int, int> > &pairs, size_t groupSize)
{
    size_t start;
    size_t leftLast;
    size_t rightLast;

    if (groupSize == 0 || groupSize >= pairs.size())
        return;
    start = 0;
    while (start + (groupSize * 2) <= pairs.size())
    {
        leftLast = start + groupSize - 1;
        rightLast = start + (groupSize * 2) - 1;
        if (pairs[leftLast].second > pairs[rightLast].second)
        {
            std::swap_ranges(pairs.begin() + start,
                pairs.begin() + start + groupSize,
                pairs.begin() + start + groupSize);
        }
        start += groupSize * 2;
    }
    SortPairGroupsRecursive(pairs, groupSize * 2);
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
    SortEachPair(this->vec);
    SortPairGroupsRecursive(this->vec, 1);
}
void PmergeMe::PrintPairs()
{
    for (size_t i = 0; i < this->vec.size(); i++)
    {
        std::cout << this->vec[i].first << " " <<this->vec[i].second << std::endl;
    }

    std::cout << "The size of the vector is " << this->vec.size() << std::endl;
}