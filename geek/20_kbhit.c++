#include<iostream>
using namespace std;
#include<conio.h>

int main(void)
{
    char ch;
    cout<<"Press key ESC to exit.\n";

    while(1)
    {
        if(kbhit)
        {
            ch=getch();
            if(int(ch)==27)
            {
                break;
            }
            cout<<"You entered : "<<ch<<endl;
        }
    }
}