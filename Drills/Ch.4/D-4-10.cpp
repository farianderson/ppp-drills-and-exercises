// 10. Keep all the values entered (converted into meters) in a vector. At the
//     End, write out those values.

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
const std::vector<std::string> accepted_units = {"cm" , "m" , "in" , "ft"};
const std::vector<double> unit_factors = {.01, 1, .0254, 12*.0254};

double sum(std::vector<double> numbers)
{
    double sum;
    for(double num:numbers)
        sum += num;
    return sum;
}

// a nasty way to find the minimum and maximum of a vector of double numbers ;)
std::vector<double> minmax(std::vector<double> numbers)
{
    std::vector<double> o = {numbers[0],numbers[0]};
    for(double num:numbers)
    {
        if(num < o[0]) o[0] = num;
        if(num > o[1]) o[1] = num;
    }

    return o;
}

int main() 
{

    std::cout << msg_input << std::endl;

    std::vector<double> values;

    double input_double, value;
    std::string unit;
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
            std::cout << "---> " << "unit not valid" << std::endl;
            std::cout << msg_input << std::endl;
            continue;
        }

        values.push_back(value);

        std::cout << std::endl << "Enter " << exit_char << " to exit or any other charater to repeat" << std::endl;

        char input_char;
        if (std::cin >> input_char)
            if (input_char == exit_char)
            {
                std::cout << "number of inputs: " << values.size() << std::endl;
                std::cout << "sum of inputs: " << sum(values) << 'm' << std::endl;

                auto min_max = minmax(values);
                std::cout << "the smallest value: " << min_max[0] << 'm' << std::endl;

                std::cout << "the largest value: " << min_max[1] << 'm' << std::endl;
                std::cout << msg_exit  << std::endl;
                return 0;
            }

            else std::cout << "Enter another number and unit" << std::endl;

        else break;

    }

    std::cout << "input not valid. " << msg_exit << std::endl;

}


// Note: this program only accepts three inputs per loop.
// 1. the first input must be a number. 
// 2. and the second input is an string.
// 3. the third input must be a single character.
