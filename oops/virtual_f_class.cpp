#include<iostream>
using namespace std;

class A
{
public:
  void display()
  {
    cout<<"Base class"<<endl;
  }
};

class B
{
public:
  void display()
  {
    cout<<"Derived class";
  }
};

int main(void)
{
  A a;
  B ob;
  a.display();
  ob.display();
}
