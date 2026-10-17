#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>

class NumberNotFoundException : public std::exception
{
    public:
        virtual const char *what() const throw();
};
template <typename T>
typename T::iterator easyFind(T &Arr, int n)
{
    typename T::iterator iter = std::find(Arr.begin(), Arr.end(), n);

    if (iter == Arr.end())
        throw NumberNotFoundException();
    return iter;
}
#endif