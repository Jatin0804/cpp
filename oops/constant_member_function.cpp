#include<iostream>
using namespace std;

class test
{
  int value;

public:
  test(int v)
  {
    value=v;
  }

  int getvalue()const
  {
    return value;
  }
};

int main()
{
  test obj(20);
  cout<<"First object (value=20): "<<obj.getvalue()<<endl;

  test obj1(30);
  cout<<"Second object (value=30): "<<obj.getvalue();

  return 0;
}
