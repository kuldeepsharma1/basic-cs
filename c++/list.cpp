
// implements a list of numbers with an array of fixed size

#include <iostream>

int main()
{
    // list size of 3
    int list[3];

    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    for (int i = 0; i < 3; i++)
    {
        std::cout << "Item" << list[i] << '\n';
    }

    return 0;
}
