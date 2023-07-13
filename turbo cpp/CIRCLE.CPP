#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
 int i;
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"..\\BGI");
 putpixel(200,200,15);
 circle(200,200,50);
 getch();
}