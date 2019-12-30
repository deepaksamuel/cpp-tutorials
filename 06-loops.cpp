#include <iostream> 

using namespace std; 

int main() 
{ 
    //int a;

    for(int i=0; i<100; i++)
    {
        cout<<"The value of i is: "<<i<<endl;

    }
   
    return 0;
}

// i is the loop variable 
//int i=0 initializes the value to 0
//i<100 means that this loop will run until the condition i<100 is satisfied
//i++ : this means increment the value of i by 1. i.e if i is 1 then i becomes 2 after this statement. 
//The statement i++ will be executed at the end of the loop.
//i-- decrements the value of i by 1

//assignment
//a) run the loop from 10 to 150
//b) run the loop from 150 to 10
//c) print out only if the value of i is even
//d) print out only if the value of i is odd
//e) take the value of the loop variable as an user input
//f) print the sequence: 1,1 then 1,2 then 1,3 ... 1,10 then 2,1 then 2,2 then 2,3 ... and so on until 10,10