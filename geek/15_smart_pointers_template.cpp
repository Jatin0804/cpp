//using template to overcome limitations of pointers

#include<iostream>
using namespace std;

template <class T>class smartptr
{
    T* ptr;//actual pointer

    public:
    //constructor
    explicit smartptr(T* p=NULL)
    {
        ptr=p;
    }
    //destructor
    ~smartptr()
    {
        delete (ptr);
    }

    //overloading dereferencing operator
    T& operator*()
    {
        return *ptr;
    }

    //overloading arrow operator
    T* operator->()
    {
        return ptr;
    }
};

int main()
{
    smartptr<int> ptr(new int());
    *ptr=20;
    cout<<*ptr;
    return 0;
}