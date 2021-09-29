/******************************************************************************
* File:             numberBasis.cc
* Created:          09/29/21
* Description:      Take two integers n, k and display k in base n
*****************************************************************************/

#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    // The inputs, respectively the radix and the number
    size_t rad = stoul(argv[1]),
           num = stoul(argv[2]);

    // Our digits
    char const base[36] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
        'a', 'b', 'c', 'd', 'e', 'f', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o',
        'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    // The format for the output
    cout << num << ", displayed using radix " << rad << " is: ";

    // Where we will store our digits,
    // and an iterator to iterate over the indices of digit
    char digit[100000] = {};
    size_t numIterator = 0;

    // Make sure this works for 0
    if (num == 0) cout << 0;

    // Find the digits using the hint
    while (num > 0)
    {
        digit[numIterator++] =  base[num % rad];
        num /= rad;
    }

    // Go backward through the digits to print the new form
    // of the integer
    for (size_t digitDecrementor = numIterator; digitDecrementor--;)
        cout << digit[digitDecrementor];

    // Output final newline.
    cout << '\n';
}
