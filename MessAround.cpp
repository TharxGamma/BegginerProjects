#include <iostream>
#include <string>
#include <cmath>
#include <math.h>

void NumberSwap();
void FahrenheitConverter();
void AreaOfCircle();
void IsNumberNegative();
void IsNumberOddOrEven();


void main()
{


}

void FahrenheitConverter()
{
    double Fahrenheit = 0.0;

    std::cout << "Please enter the temperature in fahrenheit to be converted to centigrade: ";
    std::cin >> Fahrenheit;

    double ConvertedTemperature = (Fahrenheit - 32) * 5/9;

    std::cout << ConvertedTemperature << std::endl;
}

void NumberSwap()
{
    int temp, a, b;

    std::cout << "Enter 2 numbers to be switched!: ";
    std::cin >> a;
    std::cin >> b;

    std::cout << a << b << std::endl;

    temp = a;

    a = b;

    b = temp;

    std::cout << a << " " << b << " " << std::endl;
}

void AreaOfCircle()
{
    const double pi = 3.1415926535897;
    double Area = 0.0;
    double Radius = 0.0;

    std::cout << "Please enter the radius of the circle to have the area calculated: ";
    std::cin >> Radius;
    std::cout << std::endl;

    Area = pi * sqrt(Radius);

    std::cout << "The area of the cirlce is: " << Area;

}

void IsNumberNegative()
{
    int a;

	std::cout<<"Enter any non-zero Number: ";

	std::cin >> a;

	(a > 0) ? std::cout << "Number is positive" : std::cout << "Number is negative";
}

void IsNumberOddOrEven()
{
    int a;

	std::cout << "Enter any number to see if its odd or even: ";

	std::cin >> a;

	(a % 2 == 0) ? std::cout << "Number is odd" : std::cout << "Number is even";
}