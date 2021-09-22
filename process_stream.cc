/******************************************************************************
* File:             process_stream.cc
*
* Author:           Levi Moes
* Created:          09/22/21
* Description:      Takes in input and prints the input reversed,
* terminated by newline or <c-d>
*****************************************************************************/

#include <iostream>

int main(int argc, char *argv[])
{
    std::string input;

    std::cout << "? ";                                                    // Initial "?", doesn't work with do {} while, I checked
    /* So far only got <C-d> working, newline only seems to work with getchar */
    while (std::cin >> input)                                             // Check for input, if found write to input,
                                                                          // terminate if <C-d> detected
    {
        for (size_t character_index = input.length(); character_index--;) // Go through string indices in reversed order
            std::cout << input[character_index];                          // Somehow this messes up spaces and newlines
        std::cout << "\n? ";
    }
}
