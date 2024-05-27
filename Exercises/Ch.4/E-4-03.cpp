// 3. Read a sequence of double values into a vector. Think of each value as
//    the distance between two cities along a given route. Compute and print
//    the total distance (the sum of all distances). Find and print the
//    smallest and greatest distance between two neighboring cities. Find and
//    print the mean distance between two neighboring cities.


//    عنبازی

#include"../../std_lib_facilities.h"

double sumOfAllValues(vector<double> seq)
{
    double sum = 0;
    for(double d:seq)
        sum += d;

    return sum;
}

double minValue(vector<double> seq)
{
    double min = seq[0];
    for(double d:seq)
        if(d < min) min = d;

    return min;
}

double maxValue(vector<double> seq)
{
    double max = seq[0];
    for(double d:seq)
        if(d > max) max = d;

    return max;
}

double meanValue(vector<double> seq)
{
    return sumOfAllValues(seq)/seq.size();
}

int main(){

    vector <double> values;
    cout << "enter a sequece of city distances.. you know how!" << endl;

    double input;
    while(cin >> input) values.push_back(input);
        
    cout << "the total distance is: " << sumOfAllValues(values) << endl;
    cout << "the minimum distance between two cities is: " << minValue(values) << endl;
    cout << "the maximum distance between two cities is: " << maxValue(values) << endl;
    cout << "the mean distance between two cities is: " << meanValue(values) << endl;

}
