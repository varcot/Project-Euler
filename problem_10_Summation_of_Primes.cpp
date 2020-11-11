//The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
//
//Find the sum of all the primes below two million.

#include <iostream>
#include <cmath>

int main()
{
    int limit = 2000000;
    unsigned long long sum = 0;
    char prime_check[limit+1];
    //Utilize the sieve of eratosthenes method and populate an array with all indices set to true
    for (int i = 0; i < limit; i++)
    {
        prime_check[i]=1;  //This makes every index true (For now)
    }
    //Loop through and designate all numbers that are not prime
    for (int i = 2; i*i <= limit; i++)
    {
        if (prime_check[i])
        {
            for (int j = i*i; j <= limit; j += i) //Starting with the square of the prime and all its multiples
            {
                prime_check[j] = 0; //These indices are no longer true
            }
        }
    }
    //Now for the final loop, this adds the index i to the sum variable if the prime array is true at that index
    for (int i = 2; i <= limit; i++)
    {
        if (prime_check[i])
        {
            //std::cout << i << " : " << sum << std::endl;
            sum += i;
        }
    }
    std::cout << sum << std::endl;
    return 0;
}
