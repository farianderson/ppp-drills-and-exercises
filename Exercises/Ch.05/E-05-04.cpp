// 4. Do exercise 3 again, but this time handle the error inside ctok().

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

int main()
{
  double c = 0;         // declare input variable
  cin >> c;             // retrieve temperature to input variable         
  double k = ctok(c);   // convert temperature
  cout << k << '\n' ;   // print out temperature                      
}
