#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"..\\BGI");
    int i;
    //putpixel(200,200,15);
    circle(100,100,20);
    for(i=120;i<=250;i++)
    {
	putpixel(100,i,15);
    }
    //line(100,120,100,250);
    setcolor(2);
    line(70,170,130,170);
    //line(100,170,130,170);
    line(70,170,50,150);
    line(130,170,150,150);
    line(100,250,70,280);
    line(100,250,130,280);
    putpixel(94,95,15);
    putpixel(107,95,15);
    arc(100,100,215,-36,10);

    getch();
}