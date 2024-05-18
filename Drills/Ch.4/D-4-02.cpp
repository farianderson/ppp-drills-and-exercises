// 2. Change the program to write out the smaller value is: followed by the smaller
//    of the numbers and the larger value is: followed by the larger value.

#include <iostream>

// these constants are defined because they will be used more than once
const char* msg_input="Enter two integers";
const char* msg_exit="program exit...";
const char exit_char='|'; 

int main() 
{

    std::cout << msg_input << std::endl;

    int input_int_1, input_int_2;
    while(std::cin >> input_int_1 >> input_int_2) 
    {

        std::cout << "numbers are " << input_int_1 << " and " << input_int_2 << std::endl;

        if (input_int_1 < input_int_2)
        {
            
            std::cout << "the smaller value is " << input_int_1 << std::endl;
            std::cout << "the larger value is " << input_int_2 << std::endl;

        }

        if (input_int_1 > input_int_2)
        {

            std::cout << "the smaller value is " << input_int_2 << std::endl;
            std::cout << "the larger value is " << input_int_1 << std::endl;
            
        }

        std::cout << "Enter " << exit_char << " to exit or any other charater to repeat" << std::endl;

        char input_char;
        if (std::cin >> input_char)
            if (input_char == exit_char)
            {

                std::cout << msg_exit  << std::endl;
                return 0;

            }
            else std::cout << msg_input << std::endl;

        else break;

    }

    std::cout << "input not valid. " << msg_exit << std::endl;

}

// Note: This solution expects exactly three inputs from the user:
// 1. first input should be an integer
// 2. second input also an integer
// 3. third input soutld be a single character
// If any of the inputs do not match this pattern, an "input not valid" message will be displayed and program will exit.
// However, if more inputs than expected are provided (for example 5 inputs instead of 3) it would automatically repeat
// the while loop after processing the first three inputs (and will consider the two extra inputs as new inputs).
// to stop this we could use std::cin.eof() after reading the exit character and find out if there's other inputs or not,
// if yes then use std::cin.clear() and std::cin.ignore() to remove extra inputs, but that's not covered in this chapter.
