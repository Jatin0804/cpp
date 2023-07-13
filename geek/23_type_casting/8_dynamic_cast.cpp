#include<iostream>
using namespace std;
#include<exception>

class base
{
    virtual void print()
    {
        cout<<"base"<<endl;
    }
};

class derived1:public base
{
    void print()
    {
        cout<<"derived1"<<endl;
    }
};

class derived2:public base
{
    void print()
    {
        cout<<"derived2"<<endl;
    }
};

int main(void)
{
    derived1 d1;
    base *bp=dynamic_cast<base*>(&d1);

    //type casting
    derived2 *d2=dynamic_cast<derived1*>(bp);
    if(d2==nullptr)
    {
        cout<<"null"<<endl;
    }
    else
    {
        cout<<"Not null"<<endl;
    }

    try
    {
        derived2& r1=dynamic_cast<derived2&>(d1);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
    
}