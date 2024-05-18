// 6. Now change the body of the loop so that it reads just one double each
//    time around. Define two variables to keep track of which is the smallest
//    and which is the largest value you have seen so far. Each time through
//    the loop write out the value entered. if it's the smallest so far, write
//    "the smallest so far" after the number. if it's the largest so far, write
//    "the largest so far" after the number.

#include <iostream>

// these constants are defined because they may be used more than once
const char* msg_input="Enter a double number";
const char* msg_exit="program exit...";
const char exit_char='|'; 

int main() 
{

    std::cout << msg_input << std::endl;

    double input_double;
    double min,max;
    bool first_input = true;
    while(std::cin >> input_double) 
    {

        if (first_input)
        {
            first_input = false;
            std::cout << "first input: " << input_double << std::endl;
            min = input_double;
            max = input_double;
            std::cout << "Enter another number" << std::endl;
        }

        else
        {
            std::cout << "number " << input_double;

            if (input_double < min)
            {
                min = input_double;
                std::cout << ", is the smallest number so far" << std::endl;
            }

            else if (input_double > max) 
            {
                max = input_double;
                std::cout << ", is the largest number so far" << std::endl;
            }


            std::cout << std::endl << "Enter " << exit_char << " to exit or any other charater to repeat" << std::endl;

            char input_char;
            if (std::cin >> input_char)
                if (input_char == exit_char)
                {
                    std::cout << msg_exit  << std::endl;
                    return 0;
                }

                else std::cout << "Enter another number" << std::endl;

            else break;

        }
    }

    std::cout << "input not valid. " << msg_exit << std::endl;

}

// Note: we could use a vector in this example and keep all the inputs and then find the max and the min from it.
// but we didn't, just for fun ;) (and because we didn't really need to)

// Note: This solution expects exactly two inputs from the user:
// 1. first input should be an double
// 2. second input soutld be a single character
// If any of the inputs do not match this pattern, an "input not valid" message will be displayed and program will exit.
// However, if more inputs than expected are provided (for example 4 inputs instead of 3) it would automatically repeat
// the while loop after processing the first two inputs (and will consider the two extra inputs as new inputs).
// to stop this we could use std::cin.eof() after reading the exit character and find out if there's other inputs or not,
// if yes then use std::cin.clear() and std::cin.ignore() to remove extra inputs, but that's not covered in this chapter.
