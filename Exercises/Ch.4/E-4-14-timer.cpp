//14. Modify the program described in the previous exercise to take an input
//    value max and then find all prime numbers from 1 to max.

#include <iostream>
#include <vector>
#include <math.h>
#include <chrono>

int main()
{
    int max = 100;
    std::cout << "prime numbers less than: ";
    if(!(std::cin>>max)) return 0;
    int sqrt_max = std::sqrt(max);
    
    auto start_time = std::chrono::steady_clock::now();
    
    std::vector<bool> numbers(max,true);
    numbers[0] = false; // 1 is not prime
    for(int i=0; i<max; i++)
    {
        if(numbers[i] == true)
        {
            int n = i+1;
            std::cout << n << ", ";
            if(n<sqrt_max)
            for(int j=n*n-1; j<max; j+=n)
                numbers[j] = false;
        }
    }

    std::cout << "   \t--finish--" << std::endl;

    auto end_time = std::chrono::steady_clock::now();
    auto duration = std::chrono::duration<double>(end_time-start_time);
    
    std::cout << std::endl;
    std::cout << "duration: " << duration.count() << std::endl;
}
