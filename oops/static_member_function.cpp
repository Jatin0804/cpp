#include<iostream>
using namespace std;

class member
{
  static int A;
  static int B;

public:
  static void display()
  {
    cout<<"The value of A : "<<A++<<endl;
    cout<<"The value of B : "<<B++<<endl;
  }
};

int member::A=20;
int member::B=40;

int main()
{
  member mb,mb1;

  cout<<"Print static member through object name : "<<endl;
  mb.display();
  mb1.display();

  cout<<"\nPrint static member throgh class name : "<<endl;
  member::display();

  return 0;
}
