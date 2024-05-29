// 7. Modify the "mini calculator" from exercise 5 to accept (just) single-
// digit numbers written as either digits or spelled out.

#include<iostream>
#include<string>
#include<vector>

const std::vector<std::string> numbers = {"zero","one","two","three","four",
    "five","six","seven","eight","nine"};

//I had to define this extra vector. for more information take a look at the 
//official solution:
//https://www.stroustrup.com/Programming/Solutions/Ch4.html
const std::vector<std::string> digits =
{
    "0","1","2","3","4","5","6","7","8","9"
};

bool validDigit = true;

int getDigit()
{
    std::string input;
    if(std::cin >> input)
    {
        for(int i=0; i < 10; i++)
            if(input == numbers[i] || input == digits[i]) 
            {
                validDigit = true;
                return i;
            }
        std::cout << std::endl;
        std::cout << input << " is not a valid digit";
        std::cout << std::endl << std::endl;
    }

    validDigit = false;
    return -1;

}

int main()
{

    std::cout << std::endl;
    std::cout << "input 3 arguments: two digits and one operator character";
    std::cout << std::endl;
    std::cout << "valid operators are: +, -, *, /" << std::endl;
    std::cout << std::endl;
    
    int a,b;
    char op;
    
    a = getDigit();
    b = getDigit();
    while(std::cin >> op && validDigit)
    {
        std::cout << std::endl;

        if(validDigit)
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
                std::cout << op << " is not a valid operator" << std::endl;
        }
        else validDigit = true;
        
        std::cout << std::endl;
        std::cout << "continue or press Ctrl+C to exit" << std::endl;
        std::cout << std::endl;

        a = getDigit();
        b = getDigit();
    }

    std::cout << std::endl;
    std::cout << "bad input.. program exit." << std::endl;
    std::cout << std::endl;
}
