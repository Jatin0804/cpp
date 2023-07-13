// Hindi lang font gernertaion

#include <stdio.h>
#include <iostream.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>
#include <math.h>

void bezier(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4)
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

    //for a
    line(130,100,190,100);
    line(160,100,160,200);
    line(125,150,160,150);
    bezier(110,130,140,100,155,140,125,150);
    bezier(110,180,140,210,155,170,125,150);
    circle(180,80,4);
    circle(180,80,3);
    circle(180,80,2);

    // for j
    line(220, 100, 290, 100);
    line(270, 100, 270, 200);
    bezier(200, 150, 180, 190, 240, 210, 240, 160);
    line(240, 160, 270, 160);

    //for li
    line(330,100,420,100);
    line(370,100,370,200);
    line(370,145,345,160);
    bezier(345,160,370,110,300,110,320,180);
    line(395,100,395,200);
    bezier(370,100,370,40,395,40,395,100);


    getch();
}