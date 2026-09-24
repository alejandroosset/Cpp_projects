#include "array.hpp"

template <typename T>
Array<T>::Array()
{
    this->Arr = NULL;
    this->Size = 0;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
    this->Size = n;
    this->Arr = new T[n]();
}

template <typename T>
Array<T>::Array(const Array& other)
{
    *this = other;
}
template <typename T>
Array<T>& Array<T>::operator=(const Array& other)
{
    if (this != &other)
    {
        this->Arr = other.Arr;
        this->Size = other.size;
    }

    return(*this);
}