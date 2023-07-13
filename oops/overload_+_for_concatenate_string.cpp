#include<iostream>
#include<string.h>
using namespace std;

class A
{
  char str[100];

public:
  void input()
  {
    cout<<"Enter String :";
    cin>>str;
  }

  void output()
  {
    cout<<"Concatenated String is "<<str<<endl;
  }

  A operator + (A ob)
  {
    A temp;
    strcpy(temp.str,str);
    strcat(temp.str,ob.str);
    return temp;
  }
};

int main(void)
{
  A s1,s2,s3;
  s1.input();
  s2.input();
  s3=s1+s2;
  s3.output();
}
