#include<iostream>
#include<bits\stdc++.h>
using namespace std;

namespace n1
{
    int x=2;
    void fun()
    {
        cout<<"This is fun() of n1"<<endl;
    }
}//namespace n1

namespace n2
{
    int x=5;
    void fun()
    {
        cout<<"This is fun() of n2"<<endl;
    }
} // namespace n2

namespace n3
{
    int x=10;
    void fun()
    {
        cout<<"This is fun() of n3"<<endl;
    }
}

using namespace n3;

int main()
{
    cout<<"n1 x : "<<n1::x<<endl;
    n1::fun();

    cout<<"n2 x : "<<n2::x<<endl;
    n2::fun();

    cout<<"n3 x : "<<x<<endl;
    fun();
}