// 11. Before writing out the values from the vector, sort then (that'll make
//     them come out in increasing order).

// Note: while inputting, it's not necessary to put a white-space between the number and unit.
// for example: inputting "20m" will be no different than inputting "20 m". I guess that's becuase we've used
// a pattern like: cin >> doulbe >> string.

//this time using std_lib_facilities :|
#include"../../std_lib_facilities.h"

// these constants are defined because they may be used more than once
const char* msg_input = "Enter a number followed by a unit, like 22 m or 12.5 cm\nThe acceptable units are : m, cm, in, ft";
const char* msg_exit="program exit...";
const char exit_char='|'; 
const vector<std::string> accepted_units = {"cm" , "m" , "in" , "ft"};
const vector<double> unit_factors = {.01, 1, .0254, 12*.0254};

int main() 
{

    std::cout << msg_input << std::endl;

    vector<double> values;

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
                sort(values);
                double min = values[0],max = values[values.size()-1],sum = 0;
                std::cout << std::endl << "the values are: " << std::endl;
                for(double num:values)
                {
                    sum += num;
                    std::cout << num << 'm' << std::endl;
                }

                std::cout << std::endl << "stats: " << std::endl;
                std::cout << "number of inputs: " << values.size() << std::endl;
                std::cout << "sum of inputs: " << sum << 'm' << std::endl;
                std::cout << "the smallest value: " << min << 'm' << std::endl;
                std::cout << "the largest value: " << max << 'm' << std::endl;
                std::cout << std::endl << msg_exit  << std::endl;
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
