//If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
//
//Find the sum of all the multiples of 3 or 5 below 1000.
#include <iostream>

unsigned long long int sumdiv(unsigned long long int tar, int n)
{
    unsigned long long int p = tar/n;
    return (n*(p*(p+1)))/2;
}

int main()
{
    unsigned long long int numlim = 10;
    numlim--;
    unsigned long long int sum = sumdiv(numlim,3)+sumdiv(numlim,5)-sumdiv(numlim,15);
    std::cout << sum << std::endl;
    return 0;
}
