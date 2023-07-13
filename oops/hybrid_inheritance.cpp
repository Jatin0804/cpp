#include<iostream>
#include<conio.h>
using namespace std;

class A
{
public:
  int a;
};

class B:public A
{
public:
  int b;
};

class C:public A
{
public:
  int c;
};

class D:public B,public C
{
public:
  int d;
};

int main()
{
  D obj;

  //obj.a=10;  ERROR-AMBIGUOUS
  //obj.a=100;  ERROR

  obj.B::a=10;
  obj.C::a=100;

  obj.b=20;
  obj.c=30;
  obj.d=40;

  cout<<"\n a from class B : "<<obj.B::a;
  cout<<"\n a from class C : "<<obj.C::a;

  cout<<"\n b : "<<obj.b;
  cout<<"\n c : "<<obj.c;
  cout<<"\n d : "<<obj.d;

  return 0;
}
