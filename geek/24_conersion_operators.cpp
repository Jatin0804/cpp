#include<iostream>
using namespace std;
#include<cmath>

class complex
{
    private:
    double real;
    double imag;

    public:
    complex(double r=0.0,double i=0.0)
    : real(r),imag(i)
    {}

    double mag()
    {
        return getMag();
    }

    //conversion operator
    operator double()
    {
        return getMag();
    }

    private:
    double getMag()
    {
        return sqrt(real*real+imag*imag);
    }
};

int main()
{
    complex com(3.0,4.0);
    cout<<com.mag()<<endl;
    cout<<com<<endl;
}