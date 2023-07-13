#include<iostream>
using namespace std;

class complex
{
    float real,imag;

public:
    complex() : real(0),imag(0) {}

    void input()
    {
        cout<<"Enter real and imaginary parts respectively : ";
        cin>>real>>imag;
    }

    //overload the + operator.
    complex operator + (const complex& obj)
    {
        complex temp;
        temp.real=real+obj.real;
        temp.imag=imag+obj.imag;
        return temp;
    }
    void output()
    {
        if(imag<0)
            cout<<"Output Complex number : "<<real<<imag<<"i";
        else
            cout<<"Output Complex number : "<<real<<"+"<<imag<<"i";
    }
};

int main(void)
{
    complex c1,c2,result;

    cout<<"Enter first complex number : \n";
    c1.input();

    cout<<"Enter second complex number : \n";
    c2.input();

    result=c1+c2;
    result.output();
}
