#include<iostream>
using namespace std;

main()
{
    char str[100];

    cout<<"STRING WITH A SINGLE WORD.\n";
    cout<<"Enter a String :";
    cin>>str;
    cout<<"You Entered :"<<str;

    cout<<"\n\nSTRING WITH MULTIPLE WORDS BY NORMAL CIN\n";
    cout<<"Enter another string :";
    cin>>str;
    cout<<"You Entered :"<<str;

    cout<<"\n\nSTRING WITH MULTIPLE WORDS BY GET-CIN\n";
    char getcin[100];
    cout<<"Enter a String :";
    fflush(stdin);
    cin.get(getcin,100);
   //fgets(getcin,sizeof(getcin),stdin);
   //gets(getcin);
    cout<<"You Entered :"<<getcin;


    cout<<"\n\nSTRING WITH MULTIPLE WORDS BY STRING.\n";
    string str1;
    cout<<"Enter String: ";
    fflush(stdin);
    getline(cin,str1);
    cout<<"You Entered :"<<str1;

}
