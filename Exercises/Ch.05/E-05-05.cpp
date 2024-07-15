// 5. Add to the program so that it can also convert from Kelvin to Celsius.

#include "../../std_lib_facilities.h"

double ctok(double c)   // converts Celsius to Kelvin                      
{
  if(c < -273.15)
  {
    cout<<"input temperature must be >= -273.15C, 0 will be returned\n";
    return 0;
  }

  double k = c + 273.15;
  return k;
}

double ktoc(double k)   // converts Kelvin to Celsius                     
{
  if(k < 0)
  {
    cout<<"input temperature must be >= 0, -273.15 will be returned\n";
    return -273.15;
  }

  double c = k - 273.15;
  return c;
}

int main()
{
  double k = 0;         // declare input variable
  cin >> k;             // retrieve temperature to input variable         
  double c = ktoc(k);   // convert temperature
  cout << c << '\n' ;   // print out temperature                      
}
