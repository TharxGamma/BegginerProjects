#include <iostream>

unsigned long long fibonacci (unsigned long long n);

void main()
{
    int numberforfib;

    std::cout << "Enter a positive number for the fibonacci sequence: ";

    std::cin >> numberforfib;
    std::cout << fibonacci(numberforfib) << std::endl;
}

unsigned long long fibonacci (unsigned long long n)
{
    if (n <= 1)
        return n; // Base case to quit out

    return fibonacci (n-1) + fibonacci (n - 2); // Recursive part
}