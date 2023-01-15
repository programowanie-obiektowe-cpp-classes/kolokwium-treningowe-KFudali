#include "zad1.hpp"

#include <memory>
#include <string>
#include <type_traits>

using namespace std;

// tutaj klasa Penne

class Penne : public Makaron
{
    public:
        double ileMaki(unsigned P) const override
        {
            return P;
        }
};

// tutaj definicja metody gotujMakaron

Makaron* Makaron::gotujMakaron(const string& str)
{
    if(str[0] == str[str.length() - 1])
    {
        return new Tagliatelle{3.14, 0.42, 0.1};
    }
    else
    {
        return new Penne;
    };
};