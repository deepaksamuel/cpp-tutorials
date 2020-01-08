#include <iostream> 

using namespace std; 

// a function is defined like so:
int average(int a, int b)
{
    return (a+b)/2;
}

int main() 
{ 
    int x,y; //declaring two integers 
    cout<<"Enter first number: "<<endl;
    cin>>x;
    cout<<"Enter second number: "<<endl;
    cin>>y;
    float avg = average(x,y);
    cout<<"The average of the numbers is: "<<avg<<endl;
    
    return 0;
}

// A function takes arguments as input, does some operations on it and returns an output
// In our case, the function average, takes two integers as input, calculates the average and returns it.

// Assignments:
// a) Try entering values and check if the results are correct. If you find it to be incorrect, modify the code.
// b) Write a function to find the factorial of a number
// c) Write a function to find the Sin or Cos of a number
// d) Write a function to find whether the number is even or odd
// e) Write a function to find the average of the 3 numbers that are given as its arguments.
