#include<iostream>
using namespace std;

class count
{
    int value;

public:
    count():value(5){}

    //used as prefix.
    count operator ++()
    {
        count temp;

        //value is the value attribute of calling object.
        temp.value=++value;

    return temp;
    }

    //used as postfix.
    count operator ++ (int)
    {
        count temp;

        //value is the value attribute of calling object.
        temp.value=value++;

        return temp;
    }

    void display()
    {
        cout<<"Count is : "<<value<<endl;
    }
};

int main(void)
{
    count count1, result;

    result=++count1;
    result.display();

    result=count1++;
    result.display();
}
