// File:             reverse.cc
// Description:      This program reverses its input, terminated by
// a whiteline of <C-d>

#include <iostream>
#include <string>
using namespace std;


int main(int argc, char *argv[])
{
    // Declare string we're using
    string stringToReverse;

    while (true)
    {
        // Print "? " and store the input in stringToReverse
        cout << "? ";
        getline(cin, stringToReverse);

        // Terminate if whiteline
        if (stringToReverse.length() == 0)
            break;

        // Go through the string backwards using canonical for loop
        for (size_t stringIterator = stringToReverse.length();
                stringIterator--;)
            cout << stringToReverse[stringIterator];

        cout << '\n';
    }
}
