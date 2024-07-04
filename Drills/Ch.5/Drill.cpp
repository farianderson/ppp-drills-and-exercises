//Below are 25 code fragments. Each is meant to be inserted into this 
//‘‘scaffolding’’:

// #include "PPP.h"
// int main()
// try {
// <<your code here>>
// return 0;
// }
// catch (exception& e) {
// cerr << "error: " << e.what() << '\n';
// return 1;
// }
// catch (...) {
// cerr << "Oops: unknown exception!\n";
// return 2;
// }

//Each has zero or more errors. Your task is to ﬁnd and remove all errors in 
//each program. When you have removed those bugs, the resulting program will 
//compile, run, and write ‘‘Success!’’ Even if you think you have spotted an 
//error, you still need to enter the (original, unimproved) program fragment 
//and test it; you may have guessed wrong about what the error is, or there 
//may be more errors in a fragment than you spotted. Also, one purpose of this
//drill is to give you a feel for how your compiler reacts to different kinds 
//of errors. Do not enter the scaffolding 25 times – that’s a job for cut and
//paste or some similar ‘‘mechanical’’ technique. Do not ﬁx problems by simply
//deleting a statement; repair them by changing, adding, or deleting a few 
//characters.

//[1] Cout << "Success!\n";
//[2] cout << "Success!\n;
//[3] cout << "Success" << !\n"
//[4] cout << success << ’\n’;
//[5] string res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n";
//[6] vector<int> v(10); v(5) = 7; if (v(5)!=7) cout << "Success!\n";Drill
//[7] if (cond) cout << "Success!\n"; else cout << "Fail!\n";
//[8] bool c = false; if (c) cout << "Success!\n"; else cout << "Fail!\n";
//[9] string s = "ape"; boo c = "fool"<s; if (c) cout << "Success!\n";
//[10] string s = "ape"; if (s=="fool") cout << "Success!\n";
//[11] string s = "ape"; if (s=="fool") cout < "Success!\n";
//[12] string s = "ape"; if (s+"fool") cout < "Success!\n";
//[13] vector<char> v(5); 
//     for (int i = 0; 0<v.size(); ++i) ; cout << "Success!\n";
//[14] vector<char> v(5); 
//     for (int i = 0; i<=v.size(); ++i) ; cout << "Success!\n";
//[15] string s = "Success!\n"; for (int i = 0; i<6; ++i) cout << s[i];
//[16] if (true) then cout << "Success!\n"; else cout << "Fail!\n";
//[17] int x = 2000; char c = x; if (c==2000) cout << "Success!\n";
//[18] string s = "Success!\n"; for (int i = 0; i<10; ++i) cout << s[i];
//[19] vector v(5); for (int i = 0; i<=v.size(); ++i) ; cout << "Success!\n";
//[20] int i = 0; int j = 9; while (i<10) ++j; if (j<i) cout << "Success!\n";
//[21] int x = 2; double d = 5/(x−2); if (d==2∗x+0.5) cout << "Success!\n";
//[22] string<char> s = "Success!\n"; 
//     for (int i = 0; i<=10; ++i) cout << s[i];
//[23] int i = 0; while (i<10) ++j; if (j<i) cout << "Success!\n";
//[24] int x = 4; double d = 5/(x−2); if (d=2∗x+0.5) cout << "Success!\n";
//[25] cin << "Success!\n";


#include <iostream>
#include <string>
#include <vector>

int main()
{
  try {
    //[1]
    std::cout << "Success!\n";
    //Success!

    //[2]
    std::cout << "Success!\n";
    //Success!

    //[3]
    std::cout << "Success" << "!\n";
    //Success!

    //[4]
    std::cout << "success" << "\n";
    //success

    //[5]
    std::string res = "7";
    std::vector<std::string> v(10);
    v[5] = res;
    std::cout << "Success!\n";
    //Success!

    //[6]
    std::vector<int> v1(10);
    v1[5] = 7; 
    if (v1[5]!=7) std::cout << "Success!\n";
    //no output

    //[7]
    if (1>2) std::cout << "Success!\n";
    else std::cout << "Fail!\n";
    //Fail!

    //[8]
    bool c = false;
    if (c) std::cout << "Success!\n";
    else std::cout << "Fail!\n";
    //Fail!

    //[9]
    std::string s = "ape";
    bool c1= "fool"<s;
    if (c1) std::cout << "Success!\n";
    //no output

    //[10]
    std::string s1 = "ape";
    if (s1=="fool") std::cout << "Success!\n";
    //no output

    //[11]
    std::string s2 = "ape";
    if (s2=="fool") std::cout << "Success!\n";
    //no output

    //[12]
    std::string s3 = "ape";
    if (s!="fool") std::cout << "Success!\n";
    //Success!

    //[13]
    std::vector<char> v2(5); 
    for (int i = 0; i<v2.size(); ++i)
      std::cout << "Success! "<< i << "\n";
    //Success! 0
    //Success! 1
    //Success! 2
    //Success! 3
    //Success! 4

    //[14]
    std::vector<char> v3(5); 
    //no output

    //[15]
    std::string s4 = "Success!\n";
    for (int i = 0; i<6; ++i) std::cout << s4[i];
    //S
    //u
    //c
    //c
    //e
    //s

    //[16]
    if (true) std::cout << "Success!\n";
    else std::cout << "Fail!\n";
    //Success!

    //[17]
    int x = 2000;
    char c2 = x;
    if (c2==2000) std::cout << "Success!\n";
    //

    //[18]
    std::string s5 = "Success!\n";
    for (int i = 0; i<10; ++i) std::cout << s5[i];
    //Success!

    //[19]
    std::vector<int> v4(5);
    for (int i = 0; i<=v4.size(); ++i) 
      std::cout << "Success! " << i << "\n";
    //Success! 0
    //Success! 1
    //Success! 2
    //Success! 3
    //Success! 4
    //Success! 5
    
    //[20]
    int i = 0;
    int j = 9;
    while (i<10) ++i;
    if (j<i) std::cout << "Success!\n";
    //Success!

    //[21]
        //int x1 = 2;
        //double d = 5/(x1-2);
        //if (d==2*x1+0.5) std::cout << "Success!\n";
    //Floating point exception

    //[22]
    std::string s6 = "Success!\n"; 
    //no output

    //[23]
    int i1 = 0;
    while (i1<10) ++i1; 
    if (0<i1) std::cout << "Success!\n";
    //Success!

    //[24]
    int x2 = 4;
    double d1 = 5/(x2-2);
    if (d1==2*x2+0.5) std::cout << "Success!\n";
    //no output

    //[25]
    std::cout << "Success!\n";
    //Success!

    return 0;
  }
  catch (std::exception& e) {
    std::cerr << "error: " << e.what() << '\n';
    return 1;
  }
  catch (...) {
    std::cerr << "Oops: unknown exception!\n";
    return 2;
  }
}
