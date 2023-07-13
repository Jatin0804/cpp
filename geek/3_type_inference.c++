// C++ program to demonstrate use of decltype and auto in functions

#include<iostream>
using namespace std;
#include<bits/stdc++.h>

template<class A,class B>
auto findMin(A a,B b) -> decltype(a < b ? a : b)
{
    return (a < b) ? a : b;
}

int fun1() {return 10;}
char fun2() {return 'v';}

int main(void)
{
    auto x=4;
    auto y=3.47;
    auto z="hello";
    auto ptr=&x;
    cout << "Type of x : " << typeid(x).name() << endl
         << "Type of y : " << typeid(y).name() << endl
         << "Type of z : " << typeid(z).name() << endl
         << "Type of ptr : " << typeid(ptr).name() << endl <<endl;

    // Create a set of strings
    set<string> st;
    st.insert({"hello", "hi", "tata", "bye","bye"});

    // 'it' evaluates to iterator to set of string type automatically
    cout<<"Output of set of strings : ";
    for (auto it = st.begin(); it != st.end(); it++)
        cout << *it << " ";

    decltype(fun1()) x1;
    decltype(fun2()) y1;

    cout << "\n\nType of x1 : " << typeid(x1).name() << endl
         << "Type of y1 : " << typeid(y1).name() << endl;

    int x2 = 5;

    // j will be of type int : data type of x
    decltype(x2) j = x2 + 5;

    cout <<"\nType of j : "<< typeid(j).name();

    cout<<"\n\nFind minimum of 4,3.44 : "<<findMin(4,3.44);
    cout<<"\nFind minimum of 5.4,3 : "<<findMin(5.4,3);

    return 0;
}