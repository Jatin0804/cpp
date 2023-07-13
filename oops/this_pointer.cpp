//When local variable’s name is same as member’s name

#include<iostream>
using namespace std;

class test
{
  int x;

public:
  void setX(int x)
  {
    this->x=x;
  }

  void print()
  {
    cout<<"x = "<<x<<endl;
  }
};

int main(void)
{
  test ob1;
  int x=20;
  ob1.setX(x);
  ob1.print();
}
