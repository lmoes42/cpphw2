/******************************************************************************
* File:             asciiToString.cc
*
* Author:           Levi Moes
* Created:          09/24/21
* Description:      This program fills a std::string with * all letters in the
*                   extended ascii table
*****************************************************************************/

#include <iostream>
#include <ctype.h>

int main(int argc, char *argv[])
{

    std::string asciiCharacters[256];                       // Declare empty string
    for (size_t writeTo0 = 0; writeTo0 != 257; ++writeTo0)  // Overwrite string with 0s, just to be safe
        asciiCharacters[writeTo0] = '0';                    // ...
                                                            //

    char currentChar = 000;                                 // Declare char for 000
    size_t asciiIndex;                                      // index which we will be checking if it is alphabetic
    for (asciiIndex = 0; asciiIndex != 257; ++asciiIndex)   // There are 2^8 = 256 8 bit numbers
    {                                                       //
        if (isalpha((char) (currentChar + asciiIndex)))     // Check if character is alphabetic, if yes write to the string
            asciiCharacters[asciiIndex] = (char)(currentChar + asciiIndex);
    }
    // Print string
    for (size_t printIndex = 0; printIndex != 257; ++printIndex)
        std::cout << asciiCharacters[printIndex];
}
