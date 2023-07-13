#include<iostream>
#include<conio.h>
using namespace std;

class box
{
    int *p;
public:
    box()
    {
        p=new int[4];
        cout<<"Memory Allocated!"<<endl;
    }
    ~box()
    {
        delete[]p;
        cout<<"Memory Deallocated!"<<endl;
    }
}; //End of class

int main()
{
    box box1;
    return 0;
}
