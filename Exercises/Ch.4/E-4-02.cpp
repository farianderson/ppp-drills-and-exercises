// 2. If we define the median of a sequence as "a number so that exactly as
//    many elements come before it in the sequence as come after it," fix the 
//    program in 4.6.3 so that it always prints out a median. Hint: A median
//    need not be an element of the sequence.


//    alright, I don't like to fix the 4.6.3 program, let's just do it from
//    scratch.

//    unfortunately I'm not a sorting genius so we use this header to be able 
//    to use sort() function :-/
#include"../../std_lib_facilities.h"

double medianOfSortedSeq(vector<double> seq)
{
    double o = 0;
    
    if(seq.size() % 2 == 0)
        o = ( seq[ seq.size()/2 - 1 ] + seq[ seq.size()/2 ] ) / 2;
    else
        o = seq[ seq.size()/2 ];
    return o;
}

int main()
{

    vector<double> sequence;

    cout << "enter a real number";

    for(double input; cin >> input; )
    {
        sequence.push_back(input);

        sort(sequence);
        double median = medianOfSortedSeq(sequence);
       
        cout << "seq: {";
        for(double d:sequence)
            cout << d << ", ";
        cout << '}' << endl;

        cout << "the median of this sequence is: " << median << endl;

        cout << "enter another number, or Ctrl+C to exit." << endl;
    }
}
