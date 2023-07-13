#include<iostream>
using namespace std;

template<class t>
class calculator
{
    t num1,num2;

public:
    calculator(t n1,t n2)
    {
        num1=n1;
        num2=n2;
    }

    void display()
    {
        cout<<"Numbers : "<<num1<<" and "<<num2<<" . "<<endl;
        cout<<num1<<" + "<<num2<<" = "<<add()<<endl;
        cout<<num1<<" - "<<num2<<" = "<<sub()<<endl;
        cout<<num1<<" * "<<num2<<" = "<<mul()<<endl;
        cout<<num1<<" / "<<num2<<" = "<<div()<<endl;
    }

    t add() {return num1+num2;}
    t sub() {return num1-num2;}
    t mul() {return num1*num2;}
    t div() {return num1/num2;}
};

int main(void)
{
    int n1,n2;
    cout<<"Int results : "<<endl;
    cout<<"Enter First number : ";
    cin>>n1;
    cout<<"Enter Second number : ";
    cin>>n2;
    calculator<int> intcalc(n1,n2);
    intcalc.display();

    float f1,f2;
    cout<<endl<<"\nFloat results : "<<endl;
    cout<<"Enter First number : ";
    cin>>f1;
    cout<<"Enter Second number : ";
    cin>>f2;
    calculator<float> floatcalc(f1,f2);
    floatcalc.display();

}
