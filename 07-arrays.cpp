#include <iostream> 

using namespace std; 

int main() 
{ 
    int a[100]; // the number 100 defines the size of the array. The variable a is a one dimensional array of size 100
    int b[150]; // this is also an 1d array of size 150
    int c[10][10];// this is a 2d array of size 10 x 10

    
    for(int i=0; i<100; i++)
    {
        a[i] =i;
        b[149-i] =i;
        if(i<10)
        {
            c[i][i] =i;
        }

    }

    for(int i=0; i<100; i++)
    {
        cout<<"The value of a at index "<< i<< " is: "<<a[i]<<endl;
    }
   
   
    return 0;
}

// Remember the index is zero based. That means the index can take values from 0 to size-1. 
// Make sure that the index is not negative or exceeds size-1 in which case the output is unpredictable and might even lead to crashes

// Assignments:
// a) Try making the index value negative or exceeding the size of the array and see what happens.
// a) Create a 1d float array of size 250 and fill each element in the array with 250/index
// b) Create a 2d float array of size 3 x 3 and fill each element by the product of the indices (ixj)
