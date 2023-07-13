#include<iostream>
using namespace std;

class operation
{
    int a,b,add,sub,mul;
    float div;
    public:
    void get();
    void sum();
    void difference();
    void product();
    void division();
};
inline void operation::get()
{
    cout<<"Enter first value : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;
}

inline void operation::sum()
{
    add=a+b;
    cout<<"Addition of numbers :"<<add<<endl;
}

inline void operation::difference()
{
    sub = a - b;
    cout << "Difference of numbers :" << sub << endl;
}

inline void operation::product()
{
    mul = a * b;
    cout << "Multiplication of numbers :" << mul << endl;
}

inline void operation::division()
{
    div = a / b;
    cout << "Addition of numbers :" << div << endl;
}

int main(void)
{
    cout<<"Using Inline functions : \n"<<endl;
    operation s;
    s.get();
    s.sum();
    s.difference();
    s.product();
    s.division();
    return 0;
}