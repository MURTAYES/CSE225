#include <iostream>
#include "complex.h"
using namespace std;

int main()
{
    Complex c1 = Complex();
    c1.Print();

    Complex c2 = Complex(5.2, -10);
    c2.Print();

    Complex c3 = Complex(7.8, -2);
    c3.Print();

    Complex c4 = c2 - c3;
    c4.Print();

    return 0;
}
