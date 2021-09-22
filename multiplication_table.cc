/******************************************************************************
* File:             multiplication_table.cc
*
* Author:           Levi Moes
* Created:          09/21/21
* Description:      This program prints the multiplication table of the
*                   integer given in input
*****************************************************************************/
#include <iostream>

int main(int argc, char *argv[])
{
    size_t integer = std::stoul(argv[1]); // Get input given as ./a.out integer

    // Main for loop for multiplying with the numbers 1-10
    for (size_t multiplicant = 1; multiplicant != 11; ++multiplicant)
    {
        std::cout << multiplicant <<    // Output multiplicant
            " * " <<                    // Output * symbol
            integer <<                  // Output integer
            " = " <<                    // Output = sign
            multiplicant * integer <<   // Output result
            '\n';                       // Output newline
    }

    return 0; // This just here to annoy you
}
