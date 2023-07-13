//Hindi lang font gernertaion

#include <stdio.h>
#include <iostream.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>
#include<math.h>

void bezier(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4)
{
    double put_x, put_y, t;

    for (t = 0.0; t <= 1.0; t += 0.001)
    {
	put_x = pow(1 - t, 3) * x1 + 3 * t * pow(1 - t, 2) * x2 + 3 * t * t * (1 - t) * x3 + t * t * t * x4;
	put_y = pow(1 - t, 3) * y1 + 3 * t * pow(1 - t, 2) * y2 + 3 * t * t * (1 - t) * y3 + t * t * t * y4;
	putpixel(put_x, put_y, 15);
    }
}

void main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "..\\BGI");
    clrscr();

    //for j
    line(100,100,170,100);
    line(150,100,150,200);
    bezier(80,150,60,190,120,210,120,160);
    line(120,160,150,160);

    //for ti
    line(200,100,310,100);
    line(260,100,260,200);
    bezier(260,150,230,150,190,140,210,200);
    line(295,100,295,200);
    bezier(260,100,260,40,295,40,295,100);

    //for n
    line(340,100,420,100);
    line(400,100,400,200);
    line(350,150,400,150);
    bezier(350,150,320,180,390,190,370,150);

    getch();
}