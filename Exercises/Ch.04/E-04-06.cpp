// 6. Make a vector holding the ten string values "zero", "one",... "nine".
//    Use that in a program that converts a digit to its corresponding spelled
//    out value; e.g., the input "7" gives the output "seven". Have the same
//    program, using the same input loop, convert spelled out numbers into
//    their digit form; e.g., the input "seven" gives the output "7".


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

int main()
{
    std::cout << std::endl;
    std::cout << "input a single digit or spell it" << std::endl;
    std::cout << std::endl;

    std::string input;
    while(std::cin >> input)
    {
        bool valid = false;
        for(int i=0; i < 10; i++)
        {
            if(input == numbers[i])
            {
                valid = true;
                std::cout << std::endl;
                std::cout << input << " --> " << i << std::endl;
                std::cout << std::endl;
                break;
            }
            else if(input == digits[i])
            {
                valid = true;
                std::cout << std::endl;
                std::cout << input << " --> " << numbers[i] << std::endl;
                std::cout << std::endl;
                break;
            }
        }

        if(!valid)
        {
            std::cout << std::endl;
            std::cout << input << " is not a valid digit or number";
            std::cout << std::endl << std::endl;
        }
    }

    std::cout << std::endl;
    std::cout << "bad input" << std::endl;

}
