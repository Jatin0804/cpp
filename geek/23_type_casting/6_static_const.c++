#include<iostream>
#include<string>
using namespace std;

class integer 
{
    int x;
    public:
    integer(int x_in=0):x{x_in}
    {
        cout<<"Constructor called"<<endl;
    }

    operator string()
    {
        cout<<"Conersion operator called."<<endl;
        return to_string(x);
    }
};

int main()
{
    integer obj(3);
    string str=obj;
    obj=20;

    string str2=static_cast<string>(obj);
    obj=static_cast<integer>(32);

    return 0;
}