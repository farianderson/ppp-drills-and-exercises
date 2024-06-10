// 9. Try to calculate the number of rice grains that the inventor asked for 
//    in exercise 8 above. You'll find that the number is so larg that it
//    won't fit in an int or a doulbe. Observe what happnes when the number
//    gets too large to represent exactly as an int and as a double. what is
//    the largest number of squares for which you can calculate the exact
//    number of grains (using an int)? What is the largest number of squares
//    for which you can calculate the aproximate number of grains (using a 
//    double)?


//    Well, we are going to calcuate 2^n obviously.

#include<iostream>
#include <iomanip>

int main()
{
    int powerOfTwo_Int = 0; 
    double powerOfTwo_Double = 0; 
    for(int i=1; i <= 1025; i++)
    {
        std::cout << std::setprecision(1025);
        std::cout << std::endl << "square: " << i << std::endl;
        if(powerOfTwo_Int==0) powerOfTwo_Int = 1;
        else powerOfTwo_Int *= 2; //grains in the square i
        std::cout << "int: \t\t" << powerOfTwo_Int << std::endl;
        if(powerOfTwo_Double==0) powerOfTwo_Double = 1;
        else powerOfTwo_Double *=2;//grains in the square i
        std::cout << "double: \t" << powerOfTwo_Double << std::endl;
    }
}

// For int, it can calculate the exact number of grains only up to the 31st
// square. For double, it can represent the exact number of grains for powers
// of two up to 2^1023 (square 1024), but that doesn't mean double can really
// express such big numbers, in fact it has only around 15 decimal digits
// precision, beyond that, it loses precision due to the IEEE 754 standard's
// 53-bit significand limit for such large values. But in this case it's exact
// only because we have powers of two.
