#include<iostream>
using namespace std;

struct person
{
    char name[100];
    int age;
    float salary;
};

int main()
{
    person p1;

    cout<<"Enter Full name : ";
    cin.get(p1.name,100);
    cout<<"Enter Salary : ";
    cin>>p1.salary;
    cout<<"Enter Age : ";
    cin>>p1.age;

    cout<<"\nDisplaying Information. \n";
    cout<<"Name is : "<<p1.name;
    cout<<"\nAge is : "<<p1.age;
    cout<<"\nSalary is : "<<p1.salary;

    return 0;
}
