#include <iostream> 
#include <vector> 

using namespace std; 

// A vector is similar to an array but which has more advanced features (not taught here) and for which you
// need not know the size apriori 
int main() 
{ 
    vector <int> a;
    vector <float> b;

    // to set the values
    for(int i=0; i<100; i++)
    {
        a.push_back(i);
        b.push_back(i/10);
    }

    // to print out 
    for(auto i=a.begin();i!=a.end();i++)
    {
        cout<<*i<<endl;
    }
    return 0;
}

// Remember to include the file <vector> 
// The type of vector is defined inside the angle brackets i.e <int> or <float>. 
// To insert a value at the end of the vector, use push_back
// In the for loop, the keyword auto is used define a variable whose type is unknown.
// a.begin() returns the pointer to the first element (we shall see about pointers later on)
// a.end() returns the pointer to the last element
// i++ increments the pointer (not the value!)
// to read the value pointed by a pointer, we use *i  
// Assignments:
// a) Print out all the values of b
// a) The function at(indx) returns the value at that index. Print the value of b at the 5th index (without using the for loop)
// b) Check what happens if you print i instead of *i
// c) Write a program that will keep asking the user to input a number until he enters -1. Print out all the numbers that the user has entered (except -1) 
// and also the average of all the numbers.  
