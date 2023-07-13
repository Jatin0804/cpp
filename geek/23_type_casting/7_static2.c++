#include<iostream>
using namespace std;

int main()
{
    int i=10;
    void* v=static_cast<void*>(&i);
    int* p=static_cast<int*>(v);
    cout<<*p;
    return 0;
}