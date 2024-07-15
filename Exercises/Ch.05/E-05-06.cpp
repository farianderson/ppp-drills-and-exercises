// 6. Write a program that converts from Celsius to Fahrenheit and from
//    Fahrenheit to Celsius. Use estimation (§4.7.1) to see if your results 
//    are plausible.

#include "../../std_lib_facilities.h"

double ctof(double c)
{
  return 1.8*c + 32;
}

double ftoc(double f)
{
  return .5555555555*(f-32);
}

int main()
{
  double t=0;
  char cf='c';
  cin>>t>>cf;
  if(cf=='c')
    cout<<ctof(t);
  if(cf=='f')
    cout<<ftoc(t);
  cout<<endl;
}
