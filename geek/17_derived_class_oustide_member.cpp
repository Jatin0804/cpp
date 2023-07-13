// Example: define member function with argument outside the class

#include<iostream>
using namespace std;
#include<string.h>

class person
{
    int id;
    char name[100];

    public:
    void set_p(int ,char []);
    void display_p();
};

void person::set_p(int id,char n[])
{
    this->id=id;
    strcpy(this->name,n);
}

void person::display_p()
{
    cout<<endl<<id<<"\t"<<name;
}

class student: private person
{
    char course[50];
    int fee;

    public:
    void set_s(int ,char[] ,char[] ,int);
    void display_s();
};

void student::set_s(int id, char n[],char c[],int f)
{
    set_p(id,n);
    strcpy(course,c);
    fee=f;    
}

void student::display_s()
{
    display_p();
    cout<<"\t"<<course<<"\t"<<fee;
}

int main(void)
{
    student s;
    s.set_s(1001,"Ram","B.Tech",20000);
    s.display_s();
    return 0;
}