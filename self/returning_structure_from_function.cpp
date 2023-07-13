#include<iostream>
using namespace std;

struct person
{
char name[100];
int age;
float salary;
};

person getData(person);
void displayData(person);

int main()
{
    person p,temp;

    temp=getData(p);
    p=temp;
    displayData(p);

    return 0;
}

person getData(person p)
{
    cout<<"Enter Name : ";
    cin.get(p.name,100);
    cout<<"Enter Age : ";
    cin>>p.age;
    cout<<"Enter Salary : ";
    cin>>p.salary;

    return p;
}

void displayData(person p)
{
    cout<<"\nDisplaying data : \n";
    cout<<"Name is : "<<p.name;
    cout<<"\nAge is : "<<p.age;
    cout<<"\nSalary is : "<<p.salary;
}
