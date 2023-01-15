#include "zad1.hpp"
#
#include <vector>

// tutaj funkcja obliczMake

double obliczMake(const std::vector<Tagliatelle> & vec)
{
    int count = 1;
    double M = 0;
    for(auto it = vec.rbegin(); (it != vec.rend() || count > 4); it++)
    {
        M = M + it->ileMaki(count);
        count++;
    }
    if( M<= 50)
        return M;
    else if(M <= 100) 
        throw 1.;
    else
        throw 1;
}
