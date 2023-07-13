#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int exp;
    float num,result=1;
    cout<<"POWER USING MANUAL METHOD.\n";
    cout<<"Enter the number :";
    cin>>num;
    cout<<"Enter the exponent :";
    cin>>exp;
    cout<<"The Answer of "<<num<<"^"<<exp<<" is : ";
    while(exp>0)
    {
        result=result*num;
        exp--;
    }
    cout<< result;

    cout<<"\n\nPOWER USING POW() METHOD.";
    float num1,exp1,res1;
    cout<<"\nEnter a number : ";
    cin>>num1;
    cout<<"Enter the exponent :";
    cin>>exp1;
    res1=pow(num1,exp1);
    cout<<"The output of "<<num1<<"^"<<exp1<<" is : "<<res1;
    return 0;
}
