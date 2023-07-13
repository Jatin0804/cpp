// Implementation of analog clock

#include <stdio.h>
#include <iostream.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>
#include<math.h>

#define PI 3.14

void main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "..\\BGI");

    setcolor(14);
    cout << "For time 12:15:40 \nAnalog clock :";

    circle(200, 200, 100);
    circle(200,200,1);
    circle(200,200,2);
    circle(200,200,3);
    circle(200,200,101);
    circle(200,200,102);
    putpixel(200, 200, 14);

    setcolor(6);
    settextstyle(1, 0, 1);
    outtextxy(200 + 95 * sin(PI / 6) -5,200 - 95 * cos(PI / 6), "1");
    outtextxy(200 + 95 * sin(2 * PI / 6) -5, 200 - 95 * cos(2 * PI / 6), "2");
    outtextxy(200 + 95 * sin(3 * PI / 6) -5, 200 - 95 * cos(3 * PI / 6)-10, "3");
    outtextxy(200 + 90 * sin(4 * PI / 6) - 5, 200 - 90 * cos(4 * PI / 6)-10, "4");
    outtextxy(200 + 90 * sin(5 * PI / 6) - 5, 200 - 90 * cos(5 * PI / 6)-10, "5");
    outtextxy(200 + 90 * sin(6 * PI / 6) - 5, 200 - 90 * cos(6 * PI / 6)-10, "6");
    outtextxy(200 + 90 * sin(7 * PI / 6) - 5, 200 - 90 * cos(7 * PI / 6)-10, "7");
    outtextxy(200 + 90 * sin(8 * PI / 6) - 5, 200 - 90 * cos(8 * PI / 6)-10, "8");
    outtextxy(200 + 90 * sin(9 * PI / 6) - 5, 200 - 90 * cos(9 * PI / 6)-10, "9");
    outtextxy(200 + 90 * sin(10 * PI / 6) - 5, 200 - 90 * cos(10 * PI / 6)-10, "10");
    outtextxy(200 + 90 * sin(11 * PI / 6) - 5, 200 - 90 * cos(11 * PI / 6)-10, "11");
    outtextxy(200 + 90 * sin(12 * PI / 6) - 5, 200 - 90 * cos(12 * PI / 6)-10, "12");

    setcolor(2);
    line(200, 200, 200, 140);
    //arc(200,140,-30,200,2);
    circle(200,140,2);

    setcolor(3);
    line(200, 200, 280, 200);
    circle(280,200,2);

    setcolor(8);
    line(200, 200, 200+80*sin(8*PI/6),200-80*cos(8*PI/6));

    getch();
}