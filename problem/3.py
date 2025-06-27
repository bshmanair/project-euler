# include <iostream>
# include <cstdint> // for uint_32

"""

Approach used: prime factorization with trial division

1. Divide out all 2s (the only even prime)
2. Test only odd numbers from 3 up to square root of the number
3. Divide out the factor completely at each step
4. Move to next factor and repeat

"""

n = 600851475143
factor = 2
while factor * factor <= n:
    if n % factor == 0:
        n = n // factor
    else:
        if factor == 2:
            factor = 3
        else:
            factor += 2

if n > 1:
    print(n)
