#include<iostream>
using namespace std;

//Using Pointers.
void swap(int* n1,int* n2)
{
    int temp;
    temp=*n1;
    *n1=*n2;
    *n2=temp;
}

//Without using pointers.
void swap(int &n1,int &n2)
{
    int temp;
    temp=n1;
    n1=n2;
    n2=temp;
}

int main(void)
{
    int n1,n2;
    cout<<"Enter 1st number : ";
    cin>>n1;
    cout<<"Enter 2nd number : ";
    cin>>n2;
    int num1=n1,num2=n2;

    swap(&n1,&n2);

    cout<<"After Swapping, USING POINTERS : "<<endl;
    cout<<"First number : "<<n1<<endl;
    cout<<"Second number : "<<n2<<endl;

    swap(num1,num2);

    cout<<"After Swapping, WITHOUT USING POINTERS : "<<endl;
    cout<<"First number : "<<num1<<endl;
    cout<<"Second number : "<<num2<<endl;
}
