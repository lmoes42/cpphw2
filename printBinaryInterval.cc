#include <iostream>
using namespace std;
int main()
{
    size_t integerBound, integer, integerCopy;
    cin >> integerBound;


    for (integer = 0; integer != integerBound+1; ++integer)
    {
        integerCopy = integer;
        while (integerCopy)
        {
            cout << (integerCopy & 1 ? "1" : "0");
            integerCopy >>= 1;
        }
        cout << '\n';
    }
}
