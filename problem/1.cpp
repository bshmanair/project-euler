#include <iostream>

// Find numbers that are divisble by 3 and 5 (15 for simplicity)

int main()
{
    int sum = 0;
    for (int i = 1; i <= 1000; i++)
    {
        if (i % 15 == 0) // 3 * 5 = 15
        {
            sum += i;
        }
    }
    std::cout << "Sum: " << sum << std::endl;
    return 0;
}