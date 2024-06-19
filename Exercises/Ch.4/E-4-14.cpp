//14. Modify the program described in the previous exercise to take an input
//    value max and then find all prime numbers from 1 to max.

#include <iostream>
#include <vector>
#include <math.h>

int main()
{
    int max = 100;
    std::cout << "prime numbers less than: ";
    if(!(std::cin>>max)) return 0;
    int sqrt_max = std::sqrt(max);
    
    std::vector<bool> numbers(max,true);
    numbers[0] = false; // 1 is not prime
    for(int i=0; i<max; i++)
    {
        if(numbers[i] == true)
        {
            int n = i+1;
            std::cout << n << ", ";
            if(n<=sqrt_max)
            for(int j=n*n-1; j<max; j+=n)
                numbers[j] = false;
        }
    }

    std::cout << "\t--finish--\t--finish--" << std::endl;
}
// it took 42 seconds for max = 100'000'000, not too fast, but better.
// initializing the numbers vector will take a long time and a lot of memory.
// Device: Dell XPS-L501
