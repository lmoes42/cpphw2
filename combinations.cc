
#include <iostream>
using namespace std;

// In the example we get that there are 3 inputs
// and we wish to output every possible selection,
// this gives 3 choose 0 + 3 choose 1 + ... + 3 choose 3 = 8,
// so more generally for n inputs we have by the binomial theorem
// n choose 0 + ... + n choose n = 2^n options
// In fact, we see that this 2^n makes sense, as
// printing this corresponds to printing the binary numbers
// of length argc - 1, for the given example:
// 000
// 100
// 010
// 110
// 001
// 101
// 011
// 111

/******************************************************************************
* Function:         pow(a,b)
* Description:      Compute a^b
* Where:
* Return:           a^b
* Error:
*****************************************************************************/
size_t pow(size_t base, size_t exponent)
{
	size_t result = 1;

	while(exponent > 0){

      // Check if exponent is odd
      if ((exponent & 1))
          result = result * base;

    // Divide exponent by 2
		exponent = exponent >> 1;
		base = base * base;

	}
	return result;
}

int main(int argc, char *argv[])
{
    const size_t args_size = argc - 1;                               // Get number of relevant arguments
    char *args[args_size];                                           // Declare array to store arguments
    for (size_t argIterator = 1; argIterator != argc; ++argIterator) // Put arguments in array
        args[argIterator - 1] = argv[argIterator];                   //
                                                                     //
    size_t integerBound = pow(2, args_size),                         // Get number of selections,
           integerCopy, binaryIterator;                              // Declare variables to be used in the loop
                                                                     // so that we don't re declare them every iteration
    for (int integer = 0; integer != integerBound; ++integer)        // Go through 2^n - 1 integers
    {

        binaryIterator = 0;                                          // Declare iterator for while loop
        integerCopy = integer;                                       // Make copy of integer so we can apply >>= on it

        cout << integer + 1 << ": ";                                 // Output line number
        while (integerCopy)                                          // Continue until integerCopy == 0
        {
            if (integerCopy & 1) cout << args[binaryIterator] << ' ';// If the last digit in the binary expansion of integer is a 1 we print the argument
            else                 cout << "";                         // Else print nothing
            integerCopy >>= 1;                                       // Get next bit
            ++binaryIterator;                                        // Get next argument
        }
        cout << '\n';                                                // Output newline
    }
}
