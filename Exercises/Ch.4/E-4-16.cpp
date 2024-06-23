//16. In the drill, you wrote a program that, given a series of numbers, found
//    the max and min of that series. The number that appears the most times
//    in a sequence is called the mode. Create a program that finds the mode
//    of a set of positive integers.

#include"../../std_lib_facilities.h"

int main()
{
  vector<int>numbers;
  int n;
  while(cin>>n)
    numbers.push_back(n);

  sort(numbers);
  int max_repeat=1;
  int repeat=1;
  int mode = numbers[0];
  for(int i=1; i<numbers.size()-1; i++)
  {
    if(numbers[i]==numbers[i+1])
    {
      repeat++;
      if(repeat>max_repeat)
      {
        max_repeat = repeat;
        mode = numbers[i];
      }
    }
    else
    {
      repeat=1;
    }
  }

  cout << "the mode is: " << mode << endl;
  cout << "repeated " << max_repeat << " times." << endl;
}

//I don't know if there can be multiple modes or not, I simply don't care :)
