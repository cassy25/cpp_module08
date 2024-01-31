#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <limits>


class Span
{
    public: 
        Span(unsigned int const& N);
        ~Span();
        Span(Span const& copy);
        Span& operator=(Span const& copy);
        void addNumber(int nb);
        int shortestSpan();
        int longestSpan();
        void addnumbers(std::vector<int>::iterator it_start, std::vector<int>::iterator it_end);
        class spanIsFull : public std::exception
        {
            virtual const char* what() const throw()
            {    
                return "Span is full";
            }
        };
        class number : public std::exception
        {
            virtual const char* what() const throw()
            {    
                return "There is no number or only one";
            }
        };
    private:
        unsigned int _N;
        std::vector<int> _vector;

};

#endif