#include<iostream>
using namespace std;

void test(int num)
{
  try
  {
    if(num==0)throw num;
    else if(num==1)throw 'x';
    else if(num==-1)throw 1.0;
    else cout<<("Everything else.");
  }
  catch(char ch)
  {
    cout<<"caught a character."<<endl;
  }
  catch(int n)
  {
    cout<<"Caught a integer."<<endl;
  }
  catch(double d)
  {
    cout<<"Caught a double"<<endl;
  }
}

int main(void)
{
  test(1);
  test(0);
  test(-1);
  test(2);
  return 0;
}
