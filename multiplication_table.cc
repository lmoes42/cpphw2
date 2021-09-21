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
    size_t integer;                     // Declare the integer we will be using
    std::cin >> integer;                // Get input; define integer

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
}
