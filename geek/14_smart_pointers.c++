/*
// C++ program to demonstrate working of a Pointers
#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int breadth;
};

void fun()
{
    // By taking a pointer p and
    // dynamically creating object
    // of class rectangle
    Rectangle* p = new Rectangle();
}

int main()
{
    // Infinite Loop
    while (1) {
        fun();
    }
}

*/
//output :: memory limit exceeds because it doesnot destroy memory used


#include<iostream>
using namespace std;

class smartptr
{
    int *ptr; //Actual pointer

    public:
    explicit smartptr(int *p=NULL) 
    {
        ptr=p;
    }
    ~smartptr()
    {
        delete (ptr);
    }
    //overloading dereferencing operator
    int& operator*()
    {
        return *ptr;
    }
};

int main()
{
    smartptr ptr(new int());
    *ptr=20;
    cout<<*ptr; // destructor call itself, no need to call delete ptr
    //operator overloaded

    return 0;
}
