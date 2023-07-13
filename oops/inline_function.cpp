#include<iostream>
using namespace std;

class inlinefunction
{
    int num;
public:
    void input();
    void checkoddeven();
};

inline void inlinefunction :: input()
{
    cout<<"Enter any integer : ";
    cin>>num;
}
inline void inlinefunction :: checkoddeven()
{
    if(num%2==0)
        cout<<"Number is EVEN. ";
    else
        cout<<"Number is ODD. ";
}

int main(void)
{
    inlinefunction ob;
    ob.input();
    ob.checkoddeven();
}
