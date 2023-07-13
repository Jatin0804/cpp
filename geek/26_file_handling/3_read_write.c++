#include<iostream>
using namespace std;
#include<fstream>

int main()
{
    int rno,fee;
    char name[50];

    cout<<"Enter the roll number : ";
    cin>>rno;

    cout<<"\nEnter the name : ";
    cin>>name;

    cout<<"\nEnter the fee : ";
    cin>>fee;

    ofstream fout("c:/student.doc");
    fout<<rno<<"\t"<<name<<"\t"<<fee;
    fout.close();

    istream fin("c:/student.doc");
    fin>>rno>>name>>fee;
    fin.close();

    cout<<endl<<rno<<"\t"<<name<<"\t"<<fee<<endl;

    return 0;
}