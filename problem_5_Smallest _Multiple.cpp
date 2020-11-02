//2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
//
//What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

#include <iostream>

int find_gcd(int m, int n)
{
    int r;
    while (true)
    {
        r = m % n;
        if (r == 0){
            return n;
        }
        m = n;
        n = r;
    }
}

long long find_lcm(long n)
{
    long long ans = 1;
    for (long long i = 1; i<=n; i++)
    {
        ans = (ans*i)/find_gcd(ans,i);
    }
    return ans;
}

int main()
{
    int n = 20;
    std::cout << find_lcm(n) << std::endl;
    return 0;
}
