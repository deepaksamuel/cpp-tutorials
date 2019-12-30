#include <iostream> 

using namespace std; 

int main() 
{ 
    int a=100;

    if(a<100)
    {
        cout<<"a is less than 100"<<endl;
    }
    else if(a>100)
    {
        cout<<"a is greater than 100"<<endl;
    }
    else if(a==100)
    {
        cout<<"a is equal to 100"<<endl;
    }
    return 0;
}

// the if condition is used to branch your code 
// remember, the == sign used to compare whereas the = sign is used to assign a value
// assignment
// a) change the value of a to 150, 50 and check the output