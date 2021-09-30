#include <iostream>
using namespace std;

void printBinaryRepresentation(size_t number)
{
    size_t bits[1024] = {}, bitsIterator = 0;
    size_t powerOf2[1024] = {};

    // Loop to find which powers of two
    // sum to number
    while (number)
    {
        powerOf2[bitsIterator] = 0;
        bits[bitsIterator++] = (number & 1 ? 1 : 0);

        // Divide out power of 2
        number >>= 1;
    }

    // Print the bits we found in reverse order
    for (size_t decrementor = bitsIterator; decrementor--;)
    {
        cout << bits[decrementor];
        if (bits[decrementor])
            powerOf2[decrementor] = 1 << (decrementor);
    }
    cout << ' ' << '=';
    for (size_t decrementor = bitsIterator; decrementor--;)
    {
        if (powerOf2[decrementor])
            cout << (decrementor < bitsIterator - 1 ? " + " : " ")
                 << powerOf2[decrementor];
    }
    cout << '\n';
}


int main(int argc, char *argv[])
{
    size_t integer = stoul(argv[1]);

    cout << integer << " = ";
    printBinaryRepresentation(integer);

}
