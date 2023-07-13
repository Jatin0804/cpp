#include<iostream>
using namespace std;

main()
{
    int num,rev=0, temp;
    cout<<"Enter a number : ";
    cin>>num;
    while(num>0)
    {
        temp=num%10;
        rev=rev*10+temp;
        num/=10;
    }
cout<<"Reversed number is : "<<rev;
}
