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
        for (unsigned int i = 0; i < this->Size; i++)
            this->Arr[i] = other.Arr[i];
        this->Size = other.Size;
    }

    return(*this);
}
template <typename T>
Array<T>::~Array()
{
    delete[] this->Arr;
}
template <typename T>
unsigned int Array<T>::GetSize()
{
    return(this->Size);
}