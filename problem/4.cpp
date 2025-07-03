#include <iostream>
using namespace std;

bool isPalindrome(int n)
{
    int original = n, reversed = 0;
    while (n > 0)
    {
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    }
    return original == reversed;
}

int main()
{
    int maxPalindrome = 0;

    for (int a = 999; a >= 100; --a)
    {
        for (int b = 999; b >= 100; --b)
        {
            int product = a * b;
            if (product <= maxPalindrome)
            {
                break;
            }

            if (isPalindrome(product))
            {
                maxPalindrome = product;
            }
        }
    }

    std::cout << "Largest palindrome: " << maxPalindrome << std::endl;
    return 0;
}