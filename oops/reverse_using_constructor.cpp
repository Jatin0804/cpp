#include<iostream>
using namespace std;

class reverse
{
    int  num,id,rev;
public:
    void input()
    {
        cout<<"Enter Any integer : ";
        cin>>num;
    }
    reverse()
    {
        rev=0;
    }
    void revnum()
    {
        while(num>0)
        {
            id=num%10;
            rev=rev*10+id;
            num/=10;
        }
    }
    void output()
    {
        cout<<"Reverse of the number is "<<rev;
    }
};
int main()
{
    reverse ob;
    ob.input();
    ob.revnum();
    ob.output();
    return 1;
}
