// 1. Write a program that consists of a while-loop that (each time around the loop) reads in
// two ints and then prints them. Exit the program when a terminating '|' is entered.

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
        
        std::cout << "first number = " << input_int_1 << ", second number = " << input_int_2 << std::endl;
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
// However, if more inputs than expected are provided (for example 5 inputs instead of 3),
// it would automatically repeat the whole things (and will consider two extra inputs as new integers).
// to stop this we could use std::cin.eof() after reading the exit character and find out if there's other inputs or not,
// if yes then std::cin.clear() and std::cin.ignore() to eliminate extra inputs but that is not covered in this chapter.
