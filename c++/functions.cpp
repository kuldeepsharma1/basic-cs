#include <iostream>
#include <string>

int add(int a =45, int b)
{
    return a + b;
}
int add(int a, int b,int c)
{
    return a + b +c;
}
double add(double a, double b)
{
    return a + b;
}

void greet()
{
    std::cout << "Hello!\n";
}

int main()
{

    greet();
    int result = add(20, 30);
    int result1 = add(20, 30,60);
    int result2 = add(20.34, 30.56);
    std::cout << result ;
    std::cout << result1 ;
    std::cout << result2 ;

    return 0;
}
