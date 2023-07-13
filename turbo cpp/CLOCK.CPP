#include<stdio.h>
// Implementation of analog clock
/*
#include<stdio.h>
#include <iostream.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>

void main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "..\\BGI");

}
#include <graphics.h>
#include <cmath>
#include <ctime>
#include <iostream>
using namespace std;
#define PI 3.142857

main()
{

    initwindow(800, 800, "ANALOG CLOCK");
    int page = 0;
    while (1)
    {
        setactivepage(page);
        setvisualpage(1 - page);
        cleardevice();
        setcolor(8);

        circle(400, 400, 209);
        circle(400, 400, 210);
        circle(400, 400, 211);
        circle(400, 400, 212);
        circle(400, 400, 213);
        circle(400, 400, 214);

        setcolor(6);
        circle(400, 400, 1);
        circle(400, 400, 2);
        circle(400, 400, 3);
        circle(400, 400, 4);
        circle(400, 400, 5);

        setcolor(6);
        settextstyle(10, 0, 2);

        outtextxy(400 + 185 * sin(PI / 6) - 5, 400 - 185 * cos(PI / 6), "1");
        outtextxy(400 + 185 * sin(2 * PI / 6) - 5, 400 - 185 * cos(2 * PI / 6), "2");
        outtextxy(400 + 185 * sin(3 * PI / 6) - 5, 400 - 185 * cos(3 * PI / 6), "3");
        outtextxy(400 + 185 * sin(4 * PI / 6) - 5, 400 - 185 * cos(4 * PI / 6), "4");
        outtextxy(400 + 185 * sin(5 * PI / 6) - 5, 400 - 185 * cos(5 * PI / 6), "5");
        outtextxy(400 + 185 * sin(6 * PI / 6) - 5, 400 - 185 * cos(6 * PI / 6), "6");
        outtextxy(400 + 185 * sin(7 * PI / 6) - 5, 400 - 185 * cos(7 * PI / 6), "7");
        outtextxy(400 + 185 * sin(8 * PI / 6) - 5, 400 - 185 * cos(8 * PI / 6), "8");
        outtextxy(400 + 185 * sin(9 * PI / 6) - 10, 400 - 185 * cos(9 * PI / 6), "9");
        outtextxy(400 + 185 * sin(10 * PI / 6) - 10, 400 - 185 * cos(10 * PI / 6), "10");
        outtextxy(400 + 185 * sin(11 * PI / 6) - 10, 400 - 185 * cos(11 * PI / 6), "11");
        outtextxy(400 + 185 * sin(12 * PI / 6) - 5, 400 - 180 * cos(12 * PI / 6), "12");
        settextstyle(8, 0, 3);
        setcolor(4);
        outtextxy(290, 410, "Designed by:Ayushi");

        time_t now = time(0);
        tm *ltm = localtime(&now);
        system("cls");
        std::cout << ltm->tm_hour << ": " << ltm->tm_min;
        settextstyle(10, 0, 7);
        setcolor(6);

        outtextxy(170, 100, "ANALOG CLOCK");

        setcolor(CYAN);
        setlinestyle(0, 0, 4);
        line(400, 400, 400 + 150 * sin(ltm->tm_hour * PI / 6), 400 - 150 * cos(ltm->tm_hour * PI / 6));

        setcolor(GREEN);
        setlinestyle(0, 0, 3);
        line(400, 400, 400 + 180 * sin(ltm->tm_min * PI / 30), 400 - 180 * cos(ltm->tm_min * PI / 30));

        setcolor(6);
        setlinestyle(0, 0, 1);
        line(400, 400, 400 + 180 * sin(ltm->tm_sec * PI / 30), 400 - 180 * cos(ltm->tm_sec * PI / 30));

        if (GetAsyncKeyState(VK_RETURN))
            break;
        delay(10);

        page = 1 - page;
    }

    closegraph();
    return 0;
}*/

#include <stdio.h>
#include <graphics.h>
#include <stdlib.h>
#include <math.h>
#include <dos.h>
#include <time.h>

#define PI 3.147

void clockLayout();
void secHand();
void hrHand();
void minHand();
int maxx, maxy;

void main()
{
    int gdriver = DETECT, gmode, error;
    initgraph(&gdriver, &gmode, "..\\BGI");
    error = graphresult();
    if (error != grOk)
    {
        printf("Error in graphics, code= %d", grapherrormsg(error));
        exit(0);
    }

    while (1)
    {
        clockLayout();
        secHand();
        minHand();
        hrHand();
        sleep(1);      /* pausing the outputscreen for 1 sec */
        cleardevice(); /* clearing the previous picture of clock */
    }
}

void clockLayout()
{
    int i, x, y, r;
    float j;
    maxx = getmaxx();
    maxy = getmaxy();

    for (i = 1; i < 5; i++)
    { /* printing a round ring with outer radius of 5 pixel */
        setcolor(YELLOW);
        circle(maxx / 2, maxy / 2, 120 - i);
    }

    pieslice(maxx / 2, maxy / 2, 0, 360, 5); /* displaying a circle in the middle of clock */
    x = maxx / 2 + 100;
    y = maxy / 2;
    r = 100;
    setcolor(BLUE);

    for (j = PI / 6; j <= (2 * PI); j += (PI / 6))
    { /* marking the hours for every 30 degrees */
        pieslice(x, y, 0, 360, 4);
        x = (maxx / 2) + r * cos(j);
        y = (maxy / 2) + r * sin(j);
    }

    x = maxx / 2 + 100;
    y = maxy / 2;
    r = 100;
    setcolor(RED);

    for (j = PI / 30; j <= (2 * PI); j += (PI / 30))
    { /* marking the minutes for every 6 degrees */
        pieslice(x, y, 0, 360, 2);
        x = (maxx / 2) + r * cos(j);
        y = (maxy / 2) + r * sin(j);
    }
}

void secHand()
{
    struct time t;
    int r = 80, x = maxx / 2, y = maxy / 2, sec;
    float O;

    maxx = getmaxx();
    maxy = getmaxy();
    gettime(&t); /*getting the seconds in system clock */
    sec = t.ti_sec;
    O = sec * (PI / 30) - (PI / 2); /* determining the angle of the line with respect to vertical */
    setcolor(YELLOW);
    line(maxx / 2, maxy / 2, x + r * cos(O), y + r * sin(O));
}

void hrHand()
{
    int r = 50, hr, min;
    int x, y;
    struct time t;
    float O;

    maxx = getmaxx();
    maxy = getmaxy();
    x = maxx / 2, y = maxy / 2;
    gettime(&t); /*getting the seconds in system clock */
    hr = t.ti_hour;
    min = t.ti_min;

    /* determining the angle of the line with respect to vertical */
    if (hr <= 12)
        O = (hr * (PI / 6) - (PI / 2)) + ((min / 12) * (PI / 30));
    if (hr > 12)
        O = ((hr - 12) * (PI / 6) - (PI / 2)) + ((min / 12) * (PI / 30));
    setcolor(BLUE);
    line(maxx / 2, maxy / 2, x + r * cos(O), y + r * sin(O));
}

void minHand()
{
    int r = 60, min;
    int x, y;
    float O;
    struct time t;
    maxx = getmaxx();
    maxy = getmaxy();
    x = maxx / 2;
    y = maxy / 2;
    gettime(&t); /*getting the seconds in system clock */
    min = t.ti_min;
    O = (min * (PI / 30) - (PI / 2)); /* determining the angle of the line with respect to vertical */
    setcolor(RED);
    line(maxx / 2, maxy / 2, x + r * cos(O), y + r * sin(O));
}