#include<iostream>
using namespace std;

int main()
{
    int *p=NULL;
    p=new(nothrow) int;
    if(!p)
    cerr<<"\nAllocation of memory failed !!";
    else
    {
        *p=29;
        cout<<"\n Value of p : "<<  *p<<endl;
    }

    float *r=new float(75.5);
    clog<<"\n Value of r : "<<*r<<endl;

    int n=5;
    int *q=new(nothrow) int[n];
    if(!q)
    cerr<<"\nAllocation failed of q.!!";
    else
    {
        for(int i=0;i<5;i++)
        q[i]=i+5;

        cout<<"\nValue stored in block of q : ";
        for(int i=0;i<5;i++)
        cout<<q[i]<<" ";
    }

    delete p;
    delete r;
    delete[] q;

    return 0;
}