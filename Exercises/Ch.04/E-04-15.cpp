//15. Write a program that takes an input value n and then finds the first n
//    primes.

#include<iostream>
#include<vector>
#include<math.h>

int main()
{
  std::cout << "print the first n primes for n= ";

  int n=1;
  if(!(std::cin>>n)){std::cout << "bad input" << std::endl; return 0;}

  std::vector<int> primes;

  int num=2;
  while(primes.size()<n)
  {
    int s = std::sqrt(num);
    bool isprime=true;
    for(int p:primes)
    {
      if(p>s) break;
      if(num%p == 0) 
      {
        isprime = false;
        break;
      }
    }
    if (isprime)
    {
      primes.push_back(num);
      std::cout << num << ", ";
    }
    num++;
  }
  std::cout << std::endl;
}
