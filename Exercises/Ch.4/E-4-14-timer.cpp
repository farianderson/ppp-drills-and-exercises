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
    
    auto end_of_init_time = std::chrono::steady_clock::now();

    for(int i=0; i<max; i++)
    {
        if(numbers[i] == true)
        {
            int n = i+1;
            std::cout << n << ", " << std::flush;
            if(n<=sqrt_max)
            for(int j=n*n-1; j<max; j+=n)
                numbers[j] = false;
        }
    }

    std::cout << "\t--finish--\t--finish--" << std::endl;

    auto end_time = std::chrono::steady_clock::now();

    auto init_duration =
        std::chrono::duration<double>(end_of_init_time - start_time);
    auto calc_duration =
        std::chrono::duration<double>(end_time-end_of_init_time);
    auto total_duration =
        std::chrono::duration<double>(end_time-start_time);
    
    std::cout << std::endl;
    std::cout << "memory init time: " << init_duration.count() << std::endl;
    std::cout << "algorithm time: " << calc_duration.count() << std::endl;
    std::cout << "total time: " << total_duration.count() << std::endl;
}
// it took 42 seconds for max = 100'000'000, not too fast, but better.
// initializing the numbers vector will take a long time and a lot of memory.
// Device: Dell XPS-L501
