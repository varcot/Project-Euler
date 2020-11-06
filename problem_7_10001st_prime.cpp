//By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
//
//What is the 10 001st prime number?

#include <iostream>
#include <array>

int main()
{
    int primes[10001];
    primes[0] = 2;
    primes[1] = 3;
    bool is_prime;
    int index = 2;
    long n = 3;
    //std::cout << sizeof(primes)/sizeof(primes[0]) << std::endl;
    while (index < 10001)
    {
        is_prime = true;
        for (int i = 0; i < index; i++)
        {
            if (n % primes[i] == 0)
            {
                is_prime = false;
                break;
            }
        }
        if (is_prime)
        {
            //std::cout << index << " : " <<  n << std::endl;
            primes[index] = n;
            index++;
        }
        n += 2;
    }
    std::cout << "The 10001st prime number is " << primes[index-1] << std::endl;
    return 0;
}
