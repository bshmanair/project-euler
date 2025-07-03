#include <iostream>

int target = 999;

int SumDivisibleBy(int n)
{
    int p = target / n;
    return n * p * (p + 1) / 2;
}

int main()
{
    std::cout << "Sum: " << SumDivisibleBy(3) + SumDivisibleBy(5) - SumDivisibleBy(15) << std::endl;
    return 0;
}