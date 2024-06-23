//18. Write a program to solve quadratic equations. A quadratic equation is of
//    the form
//    ax 2 + bx + c = 0
//    If you don’t know the quadratic formula for solving such an expression,
//    do some research. Remember, researching how to solve a problem is of-
//    ten necessary before a programmer can teach the computer how to solve
//    it. Use doubles for the user inputs for a, b, and c. Since there are two
//    solutions to a quadratic equation, output both x1 and x2.

#include"../../std_lib_facilities.h"

int main()
{
  cout << endl << "ax^2 + bx + c = 0" << endl << endl;
  cout << "input a, b, c and i will solve the equation ;)" << endl << endl;
  double a,b,c;
 
  if(!(cin>>a>>b>>c)) {cout << "bad input, exit..." << endl; return 0;}

  if(a==0) 
  {
    cout << endl << b <<"x + " << c << " = 0" << endl;
    cout << "x = " << -c/b << endl; return 0;
  }

  cout << endl << a << "x^2 + " << b <<"x + " << c << " = 0" << endl;

  double d = b*b - 4*a*c;

  if(d<0) {cout << "\nx has no answer in real numbers" << endl; return 0;}

  if(d==0) {cout << "x = " << -b/(2*a) << endl; return 0;}

  cout << "x = " << (-b + sqrt(d))/(2*a) << endl;
  cout << "x = " << (-b - sqrt(d)/(2*a)) << endl;

}
