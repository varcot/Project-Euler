//The four adjacent digits in the 1000-digit number that have the greatest product are 9 × 9 × 8 × 9 = 5832.
//
//Find the thirteen adjacent digits in the 1000-digit number that have the greatest product.
//What is the value of this product?

#include <iostream>
#include <fstream>

int main()
{
    int len = 13;
    long long local_product = 1;
    long long max_product = 0;
    char converter = '0';
    std::string number;
    std::string line;
    std::fstream number_file;
    number_file.open("hundred_digit_number.txt");
    if (number_file.is_open())
    {
        while (!number_file.eof())
        {
            number_file >> line;
            number += line;
        }
    }
    for (long long unsigned int i = 0; i+len < number.length(); i++)
    {
        local_product = 1;
        for (int j = 0; j < len; j++)
        {
            if (int(number[i+j]-converter == 0))
            {
                break;
            }
            local_product *= int(number[i+j]-converter);
            //std::cout << local_product << std::endl;
        }
        if (local_product > max_product)
        {
            max_product = local_product;
        }
        //std::cout << int(number[i]-'0') << std::endl;
    }
    //number_file >> number;
    std::cout << max_product << std::endl;
    return 0;
}
