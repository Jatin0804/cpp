//pair in STL

#include<iostream>
using namespace std;
#include<utility>
#include<bits/stdc++.h>

int main(void)
{
    //defining a pair
    pair<int,char> pair1;

    //first part of pair1
    pair1.first=100;
    //second pair of pair1
    pair1.second='G';

    cout<<"Pair1.first : "<<pair1.first<<" ";
    cout<<"Pair1.second : "<<pair1.second<<endl;

    pair<string, double> pair2("Hello",6.9);

    cout<<"Pair2 : "<<pair2.first<<" "<<pair2.second<<endl;

    pair<int,double> pair3;
    pair<string,char> pair4;

    cout<<"Pair3 : "<<pair3.first<<" "<<pair3.second<<endl;
    cout<<"Pair4 : "<<pair4.first<<" "<<pair4.second<<endl;

    //make_pair function

    pair<string,double> pair5;
    pair5 = make_pair("Love",3000);
    cout<<"Pair5 by make_pair : "<<pair5.first<<" "<<pair5.second<<endl;

    //swap
    //for same data type

    pair2.swap(pair5);
    cout<<"\nAfter swap,"<<endl;
    cout<<"Pair2 : "<<pair2.first<<" "<<pair2.second<<endl;
    cout<<"Pair5 : "<<pair5.first<<" "<<pair5.second<<endl;

    //tie function
    //unpacking of tuples
    //ignore keyworg ignore a particular element to unpack

    cout<<"\ntie function usage : ";
    pair<int,int> pair6={1,2};
    int a,b;
    tie(a,b)=pair6;
    cout<<endl<<"For pair6 :\na:"<<a<<" b:"<<b<<endl;

    pair<int,int> pair7={3,4};
    tie(a,ignore)=pair7;
    //old value of b
    cout<<"For pair7 :\n a:"<<a<<" b:"<<b<<endl;
    
    //pair of pairs
    pair<int,pair<int,char>> pair8={3,{4,'a'}};
    int x,y;
    char z;
    tie(x,ignore)=pair8;
    tie(y,z)=pair8.second;
    cout<<"For pair8 :\n x:"<<x<<" y:"<<y<<" z:"<<z<<endl;

    
    return 0;
}