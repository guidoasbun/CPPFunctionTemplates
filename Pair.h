//
// Created by Rodrigo Asbun on 10/2/21.
//

#ifndef PAIR_H
#define PAIR_H

#include <iostream>

template<typename T>
T maximum(const T& first, const T& second);

template<typename T>
class Pair
{
    // NOTE: The friend function declaration needs to be set as a template
    //       because it is not a member of the class Pair.
    template<typename T2>
    friend std::ostream& operator<<(std::ostream&, const Pair<T2>&);

public:
    Pair(const T&, const T&);

    void setFirst(const T&);
    void setSecond(const T&);

    T getFirst( ) const;
    T getSecond( ) const;

    Pair<T> operator+(const Pair<T>&) const;

    ~Pair() {}

private:
    T first;
    T second;
};

#endif