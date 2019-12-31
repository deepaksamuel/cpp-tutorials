#include <iostream> 
#include <vector> 

using namespace std; 

// A vector is similar to an array but which has more advanced features (not taught here) and for which you
// need not know the size apriori 
int main() 
{ 
    vector <int> a;
    vector <float> b;

    
    for(int i=0; i<100; i++)
    {
        a.push_back(i);
        b.push_back(i/10);
    }
    for(auto i=a.begin; i!=a.end(); i++)
    {
        
    }
    
    return 0;
}

// Remember the index is zero based. That means the index can take values from 0 to size-1. 
// Make sure that the index is not negative or exceeds size-1 in which case the output is unpredictable and might even lead to crashes

// Assignments:
// a) Try making the index value negative or exceeding the size of the array and see what happens.
// a) Create a 1d float array of size 250 and fill each element in the array with 250/index
// b) Create a 2d float array of size 3 x 3 and fill each element by the product of the indices (ixj)
