#include<iostream>
using namespace std;

class test1
{
    public:
    test1()
    {
        cout<<"Constructor of test1"<<endl;
    }
    ~test1()
    {
        cout<<"Destructor of test1"<<endl;
    }
};

class test2
{
public:
    test2()
    {
        cout << "Constructor of test2" << endl;
        throw 20;
    }
    ~test2()
    {
        cout << "Destructor of test2" << endl;
    }
};

int main(void)
{
    try
    {
        test1 t1;

        test2 t2;

        test1 t3; // will not work bcoz t2 is throwing error
    }
    catch(int i)
    {
        cout<< "caught " << i << '\n';
    }
    return 0;
}