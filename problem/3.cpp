#include <iostream>

int main()
{
    unsigned long long n = 600851475143;
    unsigned long long factor = 2;
    while (factor * factor <= n)
    {
        if (n % factor == 0)
        {
            n /= factor;
        }
        else
        {
            if (factor == 2)
            {
                factor = 3;
            }
            else
            {
                factor += 2;
            }
        }
    }
    if (n > 1)
    {
        std::cout << "Answer: " << n << std::endl;
    }
}