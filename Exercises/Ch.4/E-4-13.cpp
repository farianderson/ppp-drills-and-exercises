//13. Create a program to find all the prime numbers between 1 and 100. There
//    is a classic method for doing this, called the “Sieve of Eratosthenes.”
//    If you don’t know that method,

#include <iostream>
#include <vector>

std::vector<bool> numbers(100,true);
int main()
{
    numbers[0] = false; // 1 is not prime
    for(int i=0; i<100; i++)
    {
        if(numbers[i] == true)
        {
            int n = i+1;
            std::cout << n << ", ";
            for(int j=n*n-1; j<100; j+=n)
                numbers[j] = false;
        }
    }
}
