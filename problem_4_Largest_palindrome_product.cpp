//A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers
// is 9009 = 91 × 99.
//
//Find the largest palindrome made from the product of two 3-digit numbers.

#include <iostream>
#include <cmath>

bool is_palindrome(int num)
{
    int orig = num;
    int reversed = 0;
    int remainder;
    while(num != 0){
        remainder = num % 10;
        reversed = reversed*10 + remainder;
        num /= 10;
    }
    //std::cout << orig << " " << reversed << std::endl;
    return orig == reversed;
}

int main()
{
    int n = 3;
    unsigned int largestprod;
    unsigned int first, second;
    unsigned int minnum = pow(10,n-1);
    unsigned int maxnum = pow(10,n)-1;
    for (unsigned int i = maxnum; i > minnum; i--){
        for (unsigned int j = i; j > minnum; j--){
            //std::cout << i << " " << j << std::endl;
            if (is_palindrome(i*j)){
                if (i*j > largestprod){
                   largestprod = i*j;
                   first = i;
                   second = j;
                }
            }
        }
    }
    std::cout << first << " * " << second << " = " << largestprod << std::endl;
    return 0;
}
