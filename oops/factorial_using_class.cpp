#include<iostream>
using namespace std;

class A
{
  int num;
public:
  void input()
  {
    cout<<"Enter the number : ";
    cin>>num;
  }

  friend void factorial(A l);
};

void factorial(A l)
{
  int factor=1;
  for(int i=l.num;i>=1;i--)
  {
    factor=factor*i;
  }
  cout<<"Factorial of given number is : "<<factor<<endl;
}

int main(void)
{
  A obj;
  obj.input();
  factorial(obj);
}
