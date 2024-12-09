#ifndef CALCULATOR_HPP
#define CALCULATOR_HPP

#include <stdexcept>

template<typename T>
class Calculator
{
public:
    T add(T num1, T num2);
    T subtract(T num1, T num2);
    T multiply(T num1, T num2);
    T divide(T num1, T num2);
};

template<typename T>
T Calculator<T>::add(T num1, T num2)
{
    return num1 + num2;
}

template<typename T>
T Calculator<T>::subtract(T num1, T num2)
{
    return num1 - num2;
}

template<typename T>
T Calculator<T>::multiply(T num1, T num2)
{
    return num1 * num2;
}

template<typename T>
T Calculator<T>::divide(T num1, T num2)
{
    if (num2 == 0)
    {
        throw std::runtime_error("Error: Division by zero!");
    }
    return num1 / num2;
}

#endif // CALCULATOR_HPP
