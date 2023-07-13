#include<iostream>
using namespace std;

int main()
{
    int a=12, b=25;

    cout<<"a is : "<<a<<endl;
    cout<<"b is : "<<b<<endl;
    cout<<"a & b is : "<<(a & b)<<endl;
    cout<<"a | b is : "<<(a | b)<<endl;
    cout<<"a ^ b is : "<<(a ^ b)<<endl;
    cout<<"~a is : "<<~a+1<<" and ~b is : "<<~b+1<<endl;
    cout<<"\nShift right:"<<endl;
    for(int i=0;i<4;i++)
    {
        cout<<a<<" >> "<<i<<" is "<<(a>>i)<<" and "<<b<<" >> "<<i<<" is "<<(b>>i)<<endl;
    }
    cout<<"\nShift left:"<<endl;
    for(int i=0;i<4;i++)
    {
        cout<<a<<" << "<<i<<" is "<<(a<<i)<<" and "<<b<<" << "<<i<<" is "<<(b<<i)<<endl;
    }


    return 0;
}
