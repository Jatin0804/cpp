#include<iostream>
#include<conio.h>
using namespace std;

class cube
{
    int side;
public:
    cube()
    {
        side = 10;
    }
    cube(cube &x)
    {
        side = x.side;
    }
    void display()
    {
        cout<<side<<"\n";
    }
};

int main()
{
    cube c1;
    cube c2(c1);
    c1.display();
    c2.display();
    return 1;
}
