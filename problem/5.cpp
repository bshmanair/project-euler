#include <iostream>
#include <vector>
/**
int main()
{
    unsigned long long ans = 1;
    for (int i = 1; i <= 20; i++)
    {
        ans *= i;
    }
    std::cout << "Answer: " << ans << std::endl;
    return 0;
}*/

int main()
{
    int n = 2520;
    std::vector<int> factors;
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            factors.push_back(i);
        }
    }
    for (int num : factors)
    {
        std::cout << num << std::endl;
    }
}