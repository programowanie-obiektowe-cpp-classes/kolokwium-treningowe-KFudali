#include "catch.hpp"

using namespace std;
// Zad2
// tutaj definicja klasy Makaron
// BEZ definicji metody gotujMakaron (tylko z deklaracją)

class Makaron
{   
    public:
        virtual double ileMaki(unsigned) const = 0;
        static Makaron* gotujMakaron(const string& str);
};

// Zad1
// tutaj definicja klasy Tagliatelle

class Tagliatelle : public Makaron
{
    public:
        Tagliatelle(double l, double w, double r) : L(l), W(w), R(r){};
        Tagliatelle(){L = 0.5; W = 0.5; R = 0.5;};

        double ileMaki(unsigned P) const
        {
            return static_cast< double >(P * L * W * (1. - R) * C);
        };
        
    private:
        double L, W, R;
        static const double C;
};