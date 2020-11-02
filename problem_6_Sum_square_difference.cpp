//Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

#include <iostream>

int main()
{
    int sum_of_squares = 0;
    int square_of_sum = 0;
    int n = 100;
    for (int i = n; i>0; i--)
    {
        sum_of_squares += i*i;
        square_of_sum += i;
    }
    std::cout << (square_of_sum*square_of_sum) - sum_of_squares << std::endl;
    return 0;
}
