//use of functors.
//A functor(or function object) is a C++ class that acts like a function.
//Functors are called using the same old function call syntax.
//To create a functor, we create a object that overloads the operator().

#include<bits/stdc++.h>
using namespace std;

class increment
{
    private:
    int num;
    public:
    increment(int n) : num(n) {}

    int operator() (int arr_num) const
    {
        return num+arr_num;
    }
};

int main(void)
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int to_Add=5;

    transform(arr,arr+n,arr,increment(to_Add));

    cout<<"Array is : ";
    for(int i=0;i<n;i++)
    cout<<arr[i]<< " ";
}