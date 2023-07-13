#include<iostream>
using namespace std;
#include<string.h>

int main()
{
    // Program to demonstrate the working of  getline(), push_back() and pop_back()
    string str;
    
    cout<<endl<<"Enter a string : ";
    getline(cin,str);
    cout<<"The initial string is : "<<str<<endl;

    str.push_back('A');
    cout<<"The string after the pushback is : "<<str<<endl;

    str.pop_back();
    cout<<"The string after the popback is : "<<str<<endl;

    // Program to demonstrate the working of capacity(), resize() and shrink_to_fit()

    cout<<endl<<"The capacity of string is : "<<str.capacity()<<endl;
    cout<<"The length of string is : "<<str.length()<<endl;

    str.resize(10);
    cout<<"The string after reszie of 10 is : "<<str<<endl;

    str.shrink_to_fit();
    cout<<"The new capacity of string is : "<<str.capacity()<<endl;

    // Program to demonstrate the working of  begin(), end(), rbegin(), rend(), cbegin(), cend(), crbegin(), crend()

    string str1="This is to represent iterators of string.";
    string::iterator it;
    string::reverse_iterator rit;

    cout<<endl<<"String1 : "<<str1<<endl;

    cout<<"String1 using forward iterator : ";
    for(it=str1.begin(); it!=str1.end();it++)
    {
        if(it==str1.begin())
        *it='T';
        cout<<*it;
    }
    cout<<endl;

    cout << "String1 using reverse iterator : ";
    for (rit = str1.rbegin(); rit != str1.rend(); rit++)
    {
        if (rit == str1.rbegin())
        *rit = '.';
        cout << *rit;
    }
    cout << endl;

    cout << "String1 using constant forward iterator : ";
    for (auto cit = str1.cbegin(); cit != str1.cend(); cit++)
    {
        //here modifications are not possible because it is constant
        cout << *cit;
    }
    cout << endl;

    cout << "String1 using constant reverse iterator : ";
    for (auto crit = str1.crbegin(); crit != str1.crend(); crit++)
    {
        cout << *crit;
    }
    cout << endl;

    // Program to demonstrate the working of copy() and swap()

    char ch[80];
    str1.copy(ch,15,0);
    cout<<endl<<"The copied char array from string1 is : "<<ch<<endl;

    cout<<endl<<"Before swapping :"<<endl<<"The string is : "<<str<<endl;
    cout<<"The string1 is : "<<str1<<endl;

    str.swap(str1);

    cout<<endl<<"After swapping :"<<endl<<"The string is : "<<str<<endl;
    cout<<"The string1 is : "<<str1<<endl;

    //A raw string---> ignores all special chars

    string str2=R"(This is \t a new \n raw string)";
    cout<<endl<<str2<<endl;

    return 0;
}