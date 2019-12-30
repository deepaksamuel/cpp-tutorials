#include <iostream> 

using namespace std; 

int main() 
{ 
    int a=100;
    int b=150;

    if(a==100 && b==150)
    {
        cout<<"a is equal to 100 and b is equal to 150"<<endl;
    }
    if(a==150 && b<200)
    {
        cout<<"a is equal to 150 and b is less than 200"<<endl;
    }
    if(a!=150)
    {
        cout<<"a is not equal to 150"<<endl;
    }
    if(a==100 || b==100)
    {
        cout<<"either a or b is equal to 100"<<endl;
    }
    return 0;
}

// the if condition is used to branch your code 
// remember, the == sign used to compare whereas the = sign is used to assign a value
// the && symbol should be read as AND
// the != sign should be read as NOT equal to 
// the || sign should be read as OR
// assignment
// a) change the values of a and b and check the output
// b) write a if statement that would be executed if a is greater than 80 and b is less than 90
// c) write a if statement that would be executed if a is greater than 80 or b is less than 90
// d) write a if statement that would be executed if a is not equal to 80 and b is not equal to  90
