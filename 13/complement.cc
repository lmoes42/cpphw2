#include <iostream>
using namespace std;

void printBinaryRepresentation(size_t number)
{
    size_t bits[1024] = {}, bitsIterator = 0;
    size_t powerOf2[1024] = {};
    while (number)                                           // Continue until integerCopy == 0
    {
        powerOf2[bitsIterator] = 0;
        bits[bitsIterator++] = (number & 1 ? 1 : 0);
        number >>= 1;                                        // Get next bit
    }

    for (size_t decrementor = bitsIterator; decrementor--;)
    {
        cout << bits[decrementor];
        if (bits[decrementor])
            powerOf2[decrementor] = 1 << (decrementor);
    }
    cout << ' ' << '=';
    for (size_t incrementor = 0; incrementor != bitsIterator; ++incrementor)
    {
        cout << ' ' << '+' << ' ' << powerOf2[incrementor];
    }
    cout << '\n';
}


int main(int argc, char *argv[])
{
    size_t integer = stoul(argv[1]);

    printBinaryRepresentation(integer);

}
