/******************************************************************************
* File:             combinations.cc
*
* Author:           Levi Moes
* Created:          09/26/21
* Description:      Output all combinations
* of the given arguments
*
* In the example we get that there are 3 inputs
* and we wish to output every possible selection,
* this gives 3 choose 0 + 3 choose 1 + ... + 3 choose 3 = 8,
* so more generally for n inputs we have by the binomial theorem
* n choose 0 + ... + n choose n = 2^n options
* In fact, we see that this 2^n makes sense, as
* printing this corresponds to printing the binary numbers
* of length argc - 1, for the given example:
* 000
* 100
* 010
* 110
* 001
* 101
* 011
* 111
* Where we replace 1 with the argument in that position, and
* print nothing for 0
*****************************************************************************/

#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    ++argv;                                                           // Get rid of name of program

    size_t integerBound = 1,                                          // Get number of selections,
           integerCopy, binaryIterator;                               // Declare variables to be used in the loop so that we don't re declare them every iteration

    for (size_t integerBoundIterator = argc; --integerBoundIterator;) // Iterate argc times
        integerBound *= 2;                                            // set IntegerBound to 2^(argc - 1)

    for (size_t integer = 0; integer != integerBound; ++integer)      // Go through 2^n - 1 integers
    {

        binaryIterator = 0;                                           // Declare iterator for while loop
        integerCopy = integer;                                        // Make copy of integer so we can apply >>= on it

        cout << integer + 1 << ": ";                                  // Output line number
        while (integerCopy)                                           // Continue until integerCopy == 0
        {
            if (integerCopy & 1) cout << argv[binaryIterator] << ' '; // If the last digit in the binary expansion of integer is a 1 we print the argument
            else                 cout << "";                          // Else print nothing
            integerCopy >>= 1;                                        // Get next bit
            ++binaryIterator;                                         // Get next argument
        }
        cout << '\n';                                                 // Output newline
    }
}
