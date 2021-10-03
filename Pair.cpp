//
// Created by Rodrigo Asbun on 10/2/21.
//

#include "Pair.h"

using namespace std;



template<typename T>
T maximum(const T& first, const T& second)
{
    if(first < second)
        return second;
    else
        return first;
}

template<typename T>
bool search(const T a[], int numOfElements, const T& toSearch)
{
    int idx{0};
    while (idx < numOfElements)
    {
        if(toSearch == a[idx])
            return true;
        else
            ++idx;
    }
    return false;
}

template<typename T>
T addUp(const Pair<T>& thePair)
{
    return (thePair.getFirst() + thePair.getSecond());
}

template<typename T>
ostream& operator<<(ostream& out, const Pair<T>& p)
{
    out << "(" << p.first << ", " << p.second << ")";
    return out;
}

template<typename T>
Pair<T>::Pair(const T& firstValue, const T& secondValue)
{
    first = firstValue;
    second = secondValue;
}

template<typename T>
void Pair<T>::setFirst(const T& newValue)
{
    first = newValue;
}

template<typename T>
void Pair<T>::setSecond(const T& newValue)
{
    second = newValue;
}

template<typename T>
T Pair<T>::getFirst( ) const
{
    return first;
}

template<typename T>
T Pair<T>::getSecond( ) const
{
    return second;
}

template<typename T>
Pair<T> Pair<T>::operator+(const Pair<T>& otherPair) const
{
    Pair<T> temp(first + otherPair.first, second + otherPair.second);
    return temp;
}