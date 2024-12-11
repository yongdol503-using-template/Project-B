#include <iostream>

#include "calculator_pkg/calculator.hpp"

int main() {
    Calculator<double> calc;
    double num1, num2;
    char operation;

    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter an operator (+, -, *, /): ";
    std::cin >> operation;
    std::cout << "Enter second number: ";
    std::cin >> num2;

    switch (operation) {
        case '+':
            std::cout << "Result: " << calc.add(num1, num2) << std::endl;
            break;
        case '-':
            std::cout << "Result: " << calc.subtract(num1, num2) << std::endl;
            break;
        case '*':
            std::cout << "Result: " << calc.multiply(num1, num2) << std::endl;
            break;
        case '/':
            std::cout << "Result: " << calc.divide(num1, num2) << std::endl;
            break;
        default:
            std::cerr << "Error: Invalid operator!" << std::endl;
            break;
    }

    return 0;
}