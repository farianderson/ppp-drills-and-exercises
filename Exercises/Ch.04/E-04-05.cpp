// 5. Write a program that performs as a very simple calculator. Your
//    calculator should be able to handle four basic math operations - add,
//    subtract, multiply, and divide - on two input values. Your program
//    should prompt the user to enter three arguments: two double values and a
//    character to represent an operation. If the entry arguments are 35.6,
//    24.1, and '+', the program output should be "The sum of 35.6 and 24.1 is
//    59.7". In Chapter 6 we look at a much more sophisticated simple
//    calculator.

#include <iostream>

int main()
{
    std::cout << std::endl;
    std::cout << "input 3 arguments: two doubles and one operator character";
    std::cout << std::endl;
    std::cout << "valid operators are: +, -, *, /" << std::endl;
    std::cout << std::endl;
    
    double a,b;
    char op;
    while(std::cin >> a >> b >> op)
    {
        std::cout << std::endl;
        switch (op)
        {
            case '+':
                std::cout << "the sum of " << a << " and " << b << " is: ";
                std::cout << a + b << std::endl;
                break;
            case '-':
                std::cout << a << " minus " << b << " equals: " << a - b;
                std::cout << std::endl;
                break;
            case '*':
                std::cout << "the product of " << a << " and " << b <<" is: ";
                std::cout << a * b << std::endl;
                break;
            case '/':
                std::cout << a << " divided by " << b << " equals: " << a / b;
                std::cout << std::endl;
                break;
            default:
                std::cout << "operator not valid" << std::endl;
        }
        
        std::cout << std::endl;
        std::cout << "continue or press Ctrl+C to exit" << std::endl;
        std::cout << std::endl;
    }

    std::cout << std::endl;
    std::cout << "bad input.. program exit." << std::endl;
    std::cout << std::endl;
}
