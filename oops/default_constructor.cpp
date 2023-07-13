#include<iostream>
#include<conio.h>
using namespace std;

class cube
{
    int side;
    public:
    cube()
    {
        side=10;
    }
    void display()
    {
        cout<<side;
    }
};

int main()
{
    cube c;
    c.display();
    return 1;
}
