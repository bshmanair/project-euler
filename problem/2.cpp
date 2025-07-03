#include <iostream>
// Use every 3rd fibonacci number

int main()
{
    int a = 0, b = 1, c = a + b;
    int sum = 0;
    while (c < 4000000)
    {
        sum += c;
        a = b + c;
        b = c + a;
        c = a + b;
    }

    std::cout << sum << std::endl;
}