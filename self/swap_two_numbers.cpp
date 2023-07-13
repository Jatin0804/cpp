#include<iostream>
using namespace std;

main()
{
    int num1,num2, temp;
    cout<<"Enter 1st number : ";
    cin>>num1;
    cout<<"Enter 2nd number : ";
    cin>>num2;
   temp=num1;
   num1=num2;
   num2=temp;
cout<<"After Swap, 1st number is : "<<num1;
cout<<"\nAfter Swap, 2nd number is : "<<num2;
}
