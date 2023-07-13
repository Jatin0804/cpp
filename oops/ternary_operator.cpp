//USe of ternary operator for to find number is positive or negative or zero.

#include<iostream>
#include<string>
using namespace std;

int main()
{
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    string result;

    result = (num == 0) ? "Zero" : ((num>0) ? "Positive" : "Negative");
    cout<<"Number is : "<<result;

    return 0;
}
