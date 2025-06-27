#include <iostream>
#include <vector>

/**
 * Dynamic programming approach
 * - Time complexity = O(n) - loop time is determined by user input, which according to the question is expected to be 4 million.
 * - Space complexity = O(1) - no vector used in accordance with input, only initialized variables used.
 */

int main()
{
    int a = 1, b = 2, sum = 0;

    while (b <= 4000000)
    {
        if (b % 2 == 0)
        {
            sum += b;
        }
        int next = a + b;
        a = b;
        a = next;
    }

    std::cout << "Sum: " << std::endl;
    return 0;
}