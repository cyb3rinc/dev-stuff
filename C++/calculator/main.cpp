#include <iostream>
#include <math.h>
#include <typeinfo>
#include <cstdlib>

int main() {
    char op;
    double a;
    double b;

    std::cout << "What operation do you want to perform? ";
    std::cin >> op;
    std::cout << "----------------------------------------\n";

    std::cout << "Input the 1st number: ";
    std::cin >> a;

    if (typeid(a) != typeid(double)) {
        std::cout << "Incorrect input.\n";
        exit(1);
    }

    std::cout << "Input the 2nd number: ";
    std::cin >> b;

    if (typeid(b) != typeid(double)) {
        std::cout << "Incorrect input.\n";
        exit(1);
    }

    switch (op) {
        case '+':
            std::cout << "----------------------------------------\n";
            std::cout << "Your result is: " << a + b << std::endl;
            break;
        case '-':
            std::cout << "----------------------------------------\n";
            std::cout << "Your result is: " << a - b << std::endl;
            break;
        case '*':
            std::cout << "----------------------------------------\n";
            std::cout << "Your result is: " << a * b << std::endl;
            break;
        case '/':
            std::cout << "----------------------------------------\n";
            std::cout << "Your result is: " << a / b << std::endl;
            break;
        case '^':
            std::cout << "----------------------------------------\n";
            std::cout << "Your result is: " << pow(a, b) << std::endl;
            break;
            
        default:
            std::cout << "Incorrect input.\n";
            break;
        }

    return 0;  
}