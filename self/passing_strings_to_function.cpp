#include<iostream>
using namespace std;

string str1;
char str[100];

void display(char *);
void display(string);

int main()
{
    display(str1);
    display(str);

    return 0;
}

void display(char s[])
{
     cout<<"\n\nSTRING WITH MULTIPLE WORDS BY GET-CIN\n";
    cout<<"Enter a String :";
    cin.get(str,100);
    cout<<"You Entered :"<<str;
}

void display(string s)
{
    cout<<"STRING WITH MULTIPLE WORDS BY STRING.\n";
    cout<<"Enter String: ";
    getline(cin,str1);
    cout<<"You Entered :"<<str1;
}

/*
int main()
{
    string str1;
    char str[100];

    cout<<"Enter a String : ";
    getline(cin,str1);

    cout<<"Enter Another String :";
    cin.get(str,100,'\n');

    display(str1);
    display(str);

    return 0;
}

void display(char s[])
{
    cout<<"\nEntered char array is : "<<s;
}
void display(string s)
{
    cout<<"\nEntered String is : "<<s;
}
*/
