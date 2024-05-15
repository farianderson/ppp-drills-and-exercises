// 7. Add a unit to each double entered; that is, enter values such as 10cm, 2.5in, 5ft, or 3.33m.
//    Accept the four units: cm, m, in, ft. Assume conversion factors 1m == 100cm, 1in == 2.54cm, 1ft == 12in.
//    Read the unit indicator into a string. You may consider 12 m (with a space between the number and the unit)
//    equivalent to 12m (without a space).

// Note: I assume that I should take two imputs from user. one for the number, and one for the unit.
// other than that, it would be relatively difficult for this chapter.

// Note: while inputting, it's not necessary to put a white-space between the number and unit.
// for example: inputting "20m" will be no different than inputting "20 m". I guess that's becuase we've used
// a pattern like: cin >> doulbe >> string.

#include <iostream>
#include <string>
#include <vector>

// these constants are defined because they may be used more than once
const char* msg_input = "Enter a number followed by a unit, like 22 m or 12.5 cm\nThe acceptable units are : m, cm, in, ft";
const char* msg_exit="program exit...";
const char exit_char='|'; 

int main() 
{

    const std::vector<std::string> accepted_units = {"cm" , "m" , "in" , "ft"};
    const std::vector<double> unit_factors = {.01, 1, .0254, 12*.0254};

    std::cout << msg_input << std::endl;

    double input_double, value;
    std::string unit;
    double min,max;
    bool first_input = true;
    while(std::cin >> input_double >> unit)
    {
        bool unit_check = false;
        for (int i = 0; i < accepted_units.size(); i++)
        {
            if(unit == accepted_units[i])
            {
                unit_check = true;
                value = input_double * unit_factors[i];
                break;
            }
        }

        if(!unit_check)
        {
            std::cout << "---> " << "unit not valid" << " <---" << std::endl;
            std::cout << msg_input << std::endl;
            continue;
        }

        if (first_input)
        {
            first_input = false;
            std::cout << "first input: " << input_double << unit << std::endl;
            min = value;
            max = value;
            std::cout << "Enter another number and unit" << std::endl;
        }

        else
        {
            std::cout << "---> " << input_double << unit;

            if (value < min)
            {
                min = value;
                std::cout << ", is the smallest value so far" << std::endl;
            }

            else if (value > max) 
            {
                max = value;
                std::cout << ", is the largest value so far" << std::endl;
            }


            std::cout << std::endl << "Enter " << exit_char << " to exit or any other charater to repeat" << std::endl;

            char input_char;
            if (std::cin >> input_char)
                if (input_char == exit_char)
                {
                    std::cout << msg_exit  << std::endl;
                    return 0;
                }

                else std::cout << "Enter another number and unit" << std::endl;

            else break;

        }
        
    }

    std::cout << "input not valid. " << msg_exit << std::endl;

}

// Note: this program only accepts three inputs per loop.
// 1. the first input must be a number. 
// 2. and the second input is an string.
// 3. the third input must be a single character.
