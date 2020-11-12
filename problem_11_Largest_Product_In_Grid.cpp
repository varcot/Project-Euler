//In the 20×20 grid below, four numbers along a diagonal line have been marked in red.
//
//The product of these numbers is 26 × 63 × 78 × 14 = 1788696.
//
//What is the greatest product of four adjacent numbers in the same direction (up, down, left, right, or diagonally)
//in the 20×20 grid?

#include <iostream>
#include <fstream>

int main()
{
    //Declare some variables
    int num = 20;       // Since it is a 20 by 20 grid, we need only one number, the array will be 1-D
    int index = 0;      // Used only for reading from file in while loop
    int temp_prod = 1;  // Variable for holding the calculation of a single 4 term product
    int max_prod = 0;   // The largest product found so far
    int gridlines[num*num]; // The array for holding all numbers in the grid after they have been read from the file
    std::string k;
    std::fstream grid_file;
    grid_file.open("20_by_20_grid.txt");
    if (grid_file.is_open())
    {
        while (!grid_file.eof())
        {
            grid_file >> k;
            gridlines[index] = stoi(k);  //Convert k to an integer
            index++;
        }
    }
    for (int i = 0; i < (num*num); i++)
    {
        //Test for left diagonal product
        if (i % num > 2 && i / num < 17)
        {
            //std::cout <<"Index " << i << " has a left diag product"<< std::endl;
            temp_prod = gridlines[i] * gridlines[i+19] * gridlines[i+38] * gridlines[i+57];
            if (temp_prod > max_prod)
            {
                max_prod = temp_prod;
            }
        }
        //Test for right diagonal product
        if (i % num < 17 && i / num < 17)
        {
            //std::cout <<"Index " << i << " has a right diag product"<< std::endl;
            temp_prod = gridlines[i] * gridlines[i+21] * gridlines[i+42] * gridlines[i+63];
            if (temp_prod > max_prod)
            {
                max_prod = temp_prod;
            }
        }
        //Test for right product
        if (i % num < 17)
        {
            //std::cout <<"Index " << i << " has a right product"<< std::endl;
            temp_prod = gridlines[i] * gridlines[i+1] * gridlines[i+2] * gridlines[i+3];
            if (temp_prod > max_prod)
            {
                max_prod = temp_prod;
            }
        }
        //Test for down product
        if (i / num < 17)
        {
            //std::cout <<"Index " << i << " has a down product"<< std::endl;
            temp_prod = gridlines[i] * gridlines[i+20] * gridlines[i+40] * gridlines[i+60];
            if (temp_prod > max_prod)
            {
                max_prod = temp_prod;
            }
        }
    }
    std::cout << max_prod << std::endl;
    return 0;
}
