#include <iostream>
#include <string>

int main()
{
    int number1{45};
    int number2{60};

    std::cout << "number1" << number1 << std::endl;
    std::cout << "number2" << number2 << std::endl;

    std::cout << std::endl;
    std::cout << "Comparing variables" << std::endl;
    std::cout << std::boolalpha << std::endl; // Make bool show up as true/false of 1/10
    // Stress the need for parantheses here
    std::cout << "number1 < number2 : " << (number1 < number2) << std::endl;
    std::cout << "number1 <= number2 : " << (number1 <= number2) << std::endl;
    std::cout << "number1 > number2 : " << (number1 > number2) << std::endl;
    std::cout << "number1 >= number2 : " << (number1 >= number2) << std::endl;
    std::cout << "number1 == number2 : " << (number1 == number2) << std::endl; 
    // std::cout <<std::boolalpha <<std::endl;
    std::cout << "number1!= number2 : " << (number1 != number2) << std::endl;
}