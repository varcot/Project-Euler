//A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
//
//a2 + b2 = c2
//For example, 32 + 42 = 9 + 16 = 25 = 52.
//
//There exists exactly one Pythagorean triplet for which a + b + c = 1000.
//Find the product abc.

#include <iostream>
#include <cmath>

int main()
{
    int c;
    long product;
    for (int b = 1; b < 1000; b++)
    {
        for (int a = 1; a < b; a++)
        {
            //std::cout << sqrt((a*a) + (b*b)) << std::endl;
            c = sqrt((a*a) + (b*b));
            if ((c*c)==((a*a) + (b*b)))
            {
                if (a+b+c == 1000 && b < c)
                {
                //std::cout << a << " " << b << " " << c << std::endl;
                    product = a*b*c;
                    break;
                }
                //std::cout << sqrt((a*a) + (b*b)) << std::endl;
            }
        }
    }
    std::cout << product << std::endl;
    return 0;
}
