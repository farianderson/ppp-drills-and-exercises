//19. Write a program where you first enter a set of name-and-value pairs,
//    such as Joe 17 and Barbara 22. For each pair, add the name to a vector 
//    called names and the number to a vector called scores (in corresponding
//    positions, so that if names[7]=="Joe" then scores[7]==17). Terminate 
//    input with NoName 0. Check that each name is unique and terminate with
//    an error message if a name is entered twice. Write out all the (name,
//    score) pairs, one per line.

#include "../../std_lib_facilities.h"

int main()
{
  vector<string>names;
  vector<double>scores;

  string name;
  double score;
  while(true)
  {
    if(!(cin>>name>>score)) {cout<<"bad input, exit..."<<endl; return 1;}
    
    if(name=="noname"&&score==0) break;
    
    for(int i=0; i<names.size(); i++)
      if(name==names[i])
      {
        cout<<"name \""<<name<<"\" is entered twice, exit..."<<endl;
        return 2;
      }

    names.push_back(name);
    scores.push_back(score);

  }

  cout << endl;
  for(int i=0; i<names.size(); i++)
    cout << names[i] << ", " << scores[i] << endl;

}
