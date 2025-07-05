#include <iostream>

int main()
{
    int num1 = 0; // Sum of squares
    int num2 = 0; // Square of sum
    for (int i = 1; i <= 100; i++)
    {
        num1 += (i * i);
        num2 += i;
    }
    num2 *= num2;
    std::cout << num2 - num1 << std::endl;
}