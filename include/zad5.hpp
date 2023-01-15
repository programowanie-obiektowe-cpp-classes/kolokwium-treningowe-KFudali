#include "zad1.hpp"

#include <algorithm>
#include <iterator>
#include <deque>
#include <random>
#include <vector>

// tutaj funkcja sortujTagliatelle

bool comp(const Tagliatelle& t_1, const Tagliatelle& t_2)
{
    return (t_1.ileMaki(1) > t_2.ileMaki(1));
}

template <typename iter>
void sortujTagliatelle(iter begin, iter end)
{
    sort(begin, end, comp);
}