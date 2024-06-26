//20. Modify the program from exercise 19 so that when you enter a name, the
//    program will output the corresponding score or name not found.

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
  
  while(true)
  {
    cout << endl << "enter a name to see their score: ";
    if(!(cin>>name)){cout<<endl<<"bad input, exit..."<<endl; return 1;}

    bool found=false;
    for(int i=0; i<names.size(); i++)
      if(names[i]==name)
      {
        cout<<endl<<name<<"'s score: "<<scores[i]<<endl;
        found=true;
      }

    if(!found) cout<<endl<<"name not found..."<<endl;

    found =false; 
  }

}
