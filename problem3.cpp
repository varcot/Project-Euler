//The prime factors of 13195 are 5, 7, 13 and 29.
//
//What is the largest prime factor of the number 600851475143 ?
#include <iostream>
#include <cmath>

int main()
{
    int greatest_prime = 2;
    unsigned long long int num = 3456;
    unsigned long long int num2 = num;
    while (num2 % 2 == 0){
        num2 = num2/2;
    }
    for (int i = 3; i*i<=num; i+=2){
        if (num2 % i ==0){
            num2 = num2/i;
            greatest_prime = i;
        }else if (num2 <= 2){
            break;
        }
    }
    std::cout << greatest_prime << std::endl;
    return 0;
}
