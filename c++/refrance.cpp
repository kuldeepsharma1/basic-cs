#include <iostream>

void changeValue(int x)
{
    x = 100;
    std::cout << "Inside changeValue: " << x << '\n';
}

void changeReference(int& x)
{
    x = 100;
    std::cout << "Inside changeReference: " << x << '\n';
}

int main()
{
    int a = 10;
    int b = 10;
    std::cout << "a = " << a << '\n';
    std::cout << "b = " << b << '\n';
    changeValue(a);
    changeReference(b);

    std::cout << "\nAfter function calls:\n";

    std::cout << "a = " << a << '\n';
    std::cout << "b = " << b << '\n';

    return 0;
}