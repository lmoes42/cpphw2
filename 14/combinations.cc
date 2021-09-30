// Description:
// Output all combinations of the given arguments
// In the example we get that there are 3 inputs
// and we wish to output every possible selection,
// this gives 3 choose 0 + 3 choose 1 + ... + 3 choose 3 = 8,
// so more generally for n inputs we have by the binomial theorem
// n choose 0 + ... + n choose n = 2^n options
// In fact, we see that this 2^n makes sense, as
// printing this corresponds to printing the binary numbers
// of length argc - 1, for the given example:
// 000 100 010 110 001 101 011 111
// Where we replace 1 with the argument in that position, and
// print nothing for 0

#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    // Get rid of name of program
    ++argv;

    // Set integerBound = 2^(argc - 1)
    size_t const integerBound = 1 << (argc - 1);
    size_t integerCopy, binaryIterator;

    // Go through 2^n - 1 integers
    for (size_t integer = 0; integer != integerBound; ++integer)
    {

        binaryIterator = 0;
        integerCopy    = integer;

        cout << integer + 1 << ": ";
        while (integerCopy)
        {

            // If this number is odd we output a "bit", else nothing
            if (integerCopy & 1)
                cout << argv[binaryIterator] << ' ';
            else
                cout << "";
            integerCopy >>= 1;
            ++binaryIterator;
        }
        cout << '\n';
    }
}
