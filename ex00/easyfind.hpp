#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

template <typename T>
int easyfind(std::vector<T> value, int nb)
{
    typename std::vector<T>::iterator iter = std::find(value.begin(), value.end(), nb);
    if (iter != value.end())
        return nb;
    else
         return (-1);
}

#endif