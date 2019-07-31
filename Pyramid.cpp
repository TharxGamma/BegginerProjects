#include <iostream>

void main()
{
    int number = 5;

    for(int i = 1; i <= number; i++)
    {
        for(int j = i; j < number; j++)
        {
            std::cout << " ";
        }
        for(int k = 1; k < (i * 2); k++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

}