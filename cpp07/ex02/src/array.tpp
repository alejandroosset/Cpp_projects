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
Array<T>& Array<T>::operator=(const Array& other)
{
    if (this != &other)
    {
        T *newArr = new T[other.Size]();
        for (unsigned int i = 0; i < other.Size; i++)
            newArr[i] = other.Arr[i];
        delete[] this->Arr;
        this->Arr = newArr;
        this->Size = other.Size;
    }

    return(*this);
}
template <typename T>
Array<T>::Array(const Array& other) : Size(other.Size)
{
    this->Arr = new T[other.Size]();

    for (unsigned int i = 0; i < other.Size; i++)
        this->Arr[i] = other.Arr[i];
}
template <typename T>
Array<T>::~Array()
{
   delete[] this->Arr;
}
template <typename T>
unsigned int Array<T>::size() const
{
    return(this->Size);
}
template <typename T>
const char *Array<T>::OutOfBoundException::what() const throw()
{
    return("Index out of bounds.\n");
}
template <typename T>
T &Array<T>::operator[](unsigned int i)
{
    if(i >= this->Size)
        throw OutOfBoundException();
    return(this->Arr[i]);
}

template <typename T>
T const &Array<T>::operator[](unsigned int i) const
{
    if (i >= this->Size)
		throw OutOfBoundException();
    return (this->Arr[i]);
}