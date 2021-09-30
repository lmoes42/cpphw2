// File:             asciiToString.cc
// Description:      This program fills a std::string with all letters in the
//                   extended ascii table

#include <iostream>
#include <ctype.h>
using namespace std;

int main()
{
    // The string we are going to fill
    string letterString;

    // Iterate over the values 0 to 255
    for (size_t asciiIterator = 0; asciiIterator != 256; ++asciiIterator)
    {
        // Check if the character at that point in the ascii table
        // is alphabetic
        if (isalpha((char) asciiIterator))
            // Write to letterString
            letterString += (char) asciiIterator;
    }
    cout << letterString;
}
