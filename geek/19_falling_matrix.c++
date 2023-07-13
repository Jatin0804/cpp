// implementation of falling matrix

#include<iostream>
using namespace std;
#include<string>
#include<thread>
#include<cstdlib>
#include<ctime>
#include<chrono>

//width of matrix
const int width=70;
//no of flips in boolean array
const int flipsPerline=5;
//delay between two line print
const int sleepTime=100;

int main(void)
{
    int i=0,x=0;

    //distinct rand values at run time
    srand(time(NULL));

    //in particular iteration
    bool switches[width]={0};

    //set of characters to print from
    const string ch="1234567890"
                    "qwertyuiopasdfghjklzxcvbnm"
                    "`~!@#$%^&*()-_=+[]{}:\"';\\|,./<>?";
    const int l=ch.size();

    //green font over black console
    system("Color 0A");

    //indefinite loop
    while(true)
    {
        //loop over width 
        //increment by 2 gives better effect
        for(i=0;i<width;i+=2)
        {
            //print characters if switches[i] is 1
            //else print blank
            if(switches[i])
            {
                cout<<ch[rand()%l]<<" ";
            }
            else
            {
                cout<<" ";
            }
        }

        //flip defined amount of boolean values after each line
        for(i=0;i!=flipsPerline;i++)
        {
            x=rand()%width;
            switches[x]=!switches[x];
        }

        cout<<endl;

        //using sleep for function delay
        //chrono miliseconds-function to covert to milliseconds
        this_thread::sleep_for(chrono::milliseconds(sleepTime));
    }

    return 0;
}