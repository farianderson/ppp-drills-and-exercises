//17. Write a program that finds the min, max, and mode of a sequence of
//    strings.

#include"../../std_lib_facilities.h"

int main()
{

  vector<string>strings;
  string n;
  while(cin>>n)
    strings.push_back(n);

  sort(strings);
  int max_repeat=1;
  int repeat=1;
  string mode = strings[0];
  for(int i=1; i<strings.size()-1; i++)
  {
    if(strings[i]==strings[i+1])
    {
      repeat++;
      if(repeat>max_repeat)
      {
        max_repeat = repeat;
        mode = strings[i];
      }
    }
    else
    {
      repeat=1;
    }
  }

  cout << "min: " << strings[0] << endl;
  cout << "max: " << strings[strings.size()-1] << endl;
  cout << "the mode is: " << mode << endl;
  cout << "repeated " << max_repeat << " times." << endl;
}
//in linux we can break the input loop by Ctrl + D, in windows, I don't care:)

//output:

//asdf asdf asdf asddf fdsa
//min: asddf
//max: fdsa
//the mode is: asdf
//repeated 3 times.
