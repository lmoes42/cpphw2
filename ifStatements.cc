#include <iostream>


int main(int argc, char *argv[])
{
    int first = -1, second = 1, test1 = 0, test2 = 2;
    int value;
    if (first == test1) if (second == test2) value = 5; else value = 6;
    std::cout << value << '\n';
}
