// Description:      This program prints the multiplication table of the
//                   integer given in input
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    // Get input given as ./a.out integer
    size_t const integer = stoul(argv[1]);

    for (size_t multiplicant = 1; multiplicant != 11; ++multiplicant)
        // Format output as
        // [multiplicant] * [integer] = [multiplicant * integer]
        cout << multiplicant <<
            " * " <<
            integer <<
            " = " <<
            multiplicant * integer <<
            '\n';
}
