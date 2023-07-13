#include<iostream>
using namespace std;

template<class t,class u,class v=char>
class ctemp
{
private:
    t var1;
    u var2;
    v var3;

public:
    ctemp(t v1,u v2, v v3) : var1(v1), var2(v2), var3(v3) {}

    void printvar()
    {
        cout<<"var1 is : "<<var1<<endl;
        cout<<"var2 is : "<<var2<<endl;
        cout<<"var3 is : "<<var3<<endl;
    }
};

int main(void)
{
    ctemp<int,double>obj1(7,7.7,'c');
    cout<<"Obj1 values : "<<endl;
    obj1.printvar();

    ctemp<double,char,bool>obj2(8.8,'a',true);
    cout<<endl<<"Obj2 values : "<<endl;
    obj2.printvar();
}
