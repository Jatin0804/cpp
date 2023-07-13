//Add members of two different classes using friend functions

#include<iostream>
using namespace std;

class classB;

class classA
{
  int numA;
public:
  classA():numA(12) {}

private:
  friend int add(classA,classB);
};

class classB
{
  int numB;

public:
  classB():numB(1){}

private:
  friend int add(classA,classB);
};

int add(classA obA,classB obB)
{
  return(obA.numA+obB.numB);
}

int main(void)
{
  classA obA;
  classB obB;

  cout<<"Sum is :"<<add(obA,obB);
}
