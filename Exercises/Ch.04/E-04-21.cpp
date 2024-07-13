//21. Modify the program from exercise 19 so that when you enter an integer,
//    the program will output all the names with that score or score not
//    found.


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
    cout << endl << "enter a score to see names with that score: ";
    if(!(cin>>score)){cout<<endl<<"bad input, exit..."<<endl; return 1;}

    bool found=false;
    for(int i=0; i<scores.size(); i++)
      if(scores[i]==score)
      {
        cout<<endl<<names[i]<<"'s score: "<<score;
        found=true;
      }

    if(!found) cout<<endl<<"score not found..."<<endl;

    found =false; 
  }

}
