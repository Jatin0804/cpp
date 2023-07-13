#include<iostream>
#include<conio.h>
using namespace std;

class cube
{
    int side;
public:
    cube(int x)
    {
        side=x;
    }
    void display()
    {
        cout<<side<<endl;
    }
};
int main()
{
    cube c1(10);
    cube c2(20);
    c1.display();
    c2.display();
    return 1;
}
