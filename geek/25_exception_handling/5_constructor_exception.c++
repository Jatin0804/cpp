#include<iostream>
using namespace std;

class test
{
    static int count;
    int id;

    public:
    test()
    {
        count++;
        id=count;
        cout<<"Constructiong object number : "<<id<<endl;
        if(id==4)
        throw 4;
    }
    ~test()
    {
        cout<<"Destructiong object number : "<<id<<endl;
    }
};

int test::count=0;

int main(void)
{
    try
    {
        test array[5];
    }
    catch(int i)
    {
        cout<< "caught" << i  << '\n';
    }
    return 0;
}