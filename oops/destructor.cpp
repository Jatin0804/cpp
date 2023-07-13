#include<iostream>
#include<conio.h>
using namespace std;

class A
{
    public:
    A()
    {
        cout<<"Constructor called.\n";
    }
    ~A()
    {
        cout<<"Destructor called.\n";
    }
};

int main()
{
    A obj1; //Constructor called.
    int x=1;
    if(x)
    {
        A obj2; //Constructor Called.
    }  //Destructor called for obj2

return 0;
} //Destructor called for obj1
