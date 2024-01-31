#include "Span.hpp"

Span::Span(unsigned int const& N) : _N(N)
{

}

Span::~Span()
{

}

Span::Span(Span const& copy)
{
    *this = copy;
}

Span& Span::operator=(Span const& copy)
{
    _N = copy._N;
    _vector = copy._vector;
    return *this;
}

void Span::addNumber(int nb)
{
    if (_vector.size() < _N)
        _vector.push_back(nb);
    else 
        throw spanIsFull();
}

int Span::shortestSpan()
{
    for (size_t i = 0; i < _vector.size(); ++i) {
        std::cout << _vector[i] << " ";
    }
    std::cout << std::endl;

    if (_vector.size() <= 1)
        throw number();
    else
    {
        unsigned int distMin = std::numeric_limits<unsigned int>::max();
        size_t i = 0;
        while (i < _vector.size() - 1)
        {
            size_t j = i + 1;
            unsigned int dist = 0;
            while (j < _vector.size())
            {
                dist = std::abs(static_cast<int>(_vector[j])-static_cast<int>(_vector[i]));
                distMin = std::min(distMin, dist);
                j++;
            }
            i++;
        }
        return (distMin);
    }
}

int Span::longestSpan()
{
   if (_vector.size() <= 1)
        throw number();
    else
    {
        unsigned int distMax = std::numeric_limits<unsigned int>::min();
        size_t i = 0;
        while (i < _vector.size() - 1)
        {
            size_t j = i + 1;
            unsigned int dist = 0;
            while (j < _vector.size())
            {
                dist = std::abs(static_cast<int>(_vector[j])-static_cast<int>(_vector[i]));
                distMax = std::max(distMax, dist);
                j++;
            }
            i++;
        }
        return (distMax);
    }
}


void Span::addnumbers(std::vector<int>::iterator it_start, std::vector<int>::iterator it_end)
{
    if (_vector.size() > _N)
        throw spanIsFull();
    else
    {
        _vector.insert(_vector.end(), it_start, it_end);
    }
    if (_vector.size() > _N)
        throw spanIsFull();
}
