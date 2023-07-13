#include<iostream>
using namespace std;
#include<cstring>

int main()
{
    char str[]="this is a string.";
    char *ch= strrchr(str,'a');
    cout<<ch-str+1; // ch=642286 and str=642278 at their address

    char denom[]="RS 1000000";
    cout<<endl<<"\n Initial string: "<<denom;
    char *ch1=strrchr(denom,'1');
    cout<<endl<<"String after ch :  "<<ch1;  

    return  0;
}