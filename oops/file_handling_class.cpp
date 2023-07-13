#include<iostream>
#include<fstream>
using namespace std;

int main(void)
{
  string name;
  int age,id,sem;

  fstream fileobj;
  fileobj.open("student.txt");
  cout<<"Enter Name : ";
  cin>>name;
  fileobj<<name;

  cout<<"Enter age : ";
  cin>>age;
  fileobj<<age;

  cout<<"Enter ID : ";
  cin>>id;
  fileobj<<id;

  cout<<"Enter semester : ";
  cin>>sem;
  fileobj<<sem;

  fileobj.close();

  fileobj.open("student.txt");
  cout<<"Name : "<<name<<endl;
  cout<<"Age : "<<age<<endl;
  cout<<"ID : "<<id<<endl;
  cout<<"Semester : "<<sem<<endl;

}
