#include<iostream>
using namespace std;

class count
{
    int value;

public:
    //constructor to initialize count to  5,
    count() : value(5){}

    //overload ++when used as prefix.
    void operator ++ ()
    {
        value++;
    }

    //overload ++ when used as postfix.
    void operator ++ (int)
    {
        value++;
    }

    void display()
    {
        cout<<"Count : "<<value<<endl;
    }
};

int main(void)
{
    count count1;

    count1++;
    count1.display();

    ++count1;
    count1.display();
}
