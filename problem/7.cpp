#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

/**
 * Prime Number Theorem to determine upper bound for Sieve of Eratosthenes
 * Sieve of Eratosthenes to filter out non-prime from bool array where ith position tells us if the number i is prime or not
 * Then find 10,001st prime using count variable as we make another pass through the bool array
 */

int main()
{
    int n = 10001;
    size_t upper_bound = n * (log(n) + log(log(n)));

    vector<bool> is_prime(upper_bound + 1, true);
    is_prime[0] = is_prime[1] = false;

    for (size_t i = 2; i * i <= upper_bound; i++)
    {
        if (is_prime[i])
        {
            for (size_t j = i * i; j <= upper_bound; j += i)
            {
                is_prime[j] = false;
            }
        }
    }

    int count = 0;
    for (size_t i = 2; i <= upper_bound; i++)
    {
        if (is_prime[i])
        {
            count++;
            if (count == n)
            {
                cout << "10,001st prime is: " << i << endl;
                break;
            }
        }
    }
}