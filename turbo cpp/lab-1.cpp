//Write a program to implement derfine pattern.

#include<graphics.h>
#include<conio.h>
#include<dos.h>

void main()
{
    int gm=DETECT,gd;
    initgraph(&gm,&gd,"..\\BGI");
    circle(300,50,20);
    line(300,70,300,140);
    line(250, 80, 350, 80);
    line(250, 190, 300, 140);
    line(300, 140, 350, 190);
    putpixel(299,44,15);
    for(int i=0;i<1;i++)
    {
        setcolor(15);
        arc(300,50,215,30,10);
        delay(100);
        setcolor(0);
        arc(300,65,26,150,10);
    }
    setcolor(15);
    line(292, 58, 309, 58);
    getch();
}