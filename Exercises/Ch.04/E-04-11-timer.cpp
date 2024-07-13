//11. Create a program to find all the prime numbers between 1 and 100. One
//    way to do this is to write a function that will check if a number is
//    prime (i.e., see if the number can be divided by a prime number smaller
//    than itself) using a vector of primes in order (so that if the vector is
//    called primes, primes[0]==2, primes[1]==3, primes[2]==5, etc.). Then
//    write a loop that goes from 1 to 100, checks each number to see if it is
//    a prime, and stores each prime found in a vector. Write another loop
//    that lists the primes you found. You might check your result by
//    comparing your vector of prime numbers with primes. Consider 2 the first
//    prime.

//    I'm gonna start from 2 and make a list of prime numbers and use it to 
//    find the others.

#include<vector>
#include<iostream>
#include<chrono>
#include<math.h>

int main()
{
    std::vector<int>primes = {};

    std::cout << "printing prime numbers less than : ";

    int n = 2;
    if (!(std::cin >> n))
    {
        std::cout << "input should be an integer number. exit..."<< std::endl;
        return 0;
    }

    auto start_time = std::chrono::steady_clock::now();

    bool isPrime = true;
    for(int i=2; i<n; i++)
    {
        int sqrt_i = std::sqrt(i);
        for(int p:primes)
            if(p<=sqrt_i)
            {
                if(i%p == 0)
                {
                    isPrime = false;
                    break;
                }
            }
            else break;
        if(isPrime)
        {
            primes.push_back(i);
            std::cout << i << ' ';
        }

        isPrime = true;
    }

    auto end_time = std::chrono::steady_clock::now();
    auto duration = std::chrono::duration<double>(end_time-start_time);
    std::cout << std::endl;
    std::cout << duration.count();
    std::cout << std::endl;
}
// Note: this algorithm is slow : it took 159 seconds for n = 100'000'000
// Device: Dell XPS-L501
