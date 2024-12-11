#include <gtest/gtest.h>

#include "calculator_pkg/calculator.hpp"

class TestCalculator : public ::testing::Test 
{
protected:
    void SetUp() override
    {
        // Code here will be called immediately after the constructor (right before each test).
    }

    void TearDown() override
    {
        // Code here will be called immediately after each test (right before the destructor).
    }

    Calculator<double> calculator;
};

TEST_F(TestCalculator, testAdd)
{
    EXPECT_EQ(calculator.add(1.0, 2.0), 3.0);
}

TEST_F(TestCalculator, testSubtract)
{
    EXPECT_EQ(calculator.subtract(2.0, 1.0), 1.0);
}

TEST_F(TestCalculator, testMultiply)
{
    EXPECT_EQ(calculator.multiply(2.0, 3.0), 6.0);
}

TEST_F(TestCalculator, testDivide)
{
    EXPECT_EQ(calculator.divide(6.0, 3.0), 2.0);
}

TEST_F(TestCalculator, testDivideByZero)
{
    EXPECT_THROW(calculator.divide(6.0, 0.0), std::runtime_error);
}