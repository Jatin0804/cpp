//Random curve generation with predefine color

#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>
#include <math.h>

void main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "..\\BGI");
    int x[4], y[4], i;
    double put_x, put_y, t;
    printf("Enter the values:");
    for (i = 0; i < 4; i++)
    {
	scanf("%d %d", &x[i], &y[i]);
    }
    setcolor(RED);
    line(x[0], y[0], x[1], y[1]);
    line(x[1], y[1], x[2], y[2]);
    line(x[2], y[2], x[3], y[3]);
    setcolor(2);
    for (t = 0.0; t < 1.0; t = t + 0.001)
    {
    put_x=pow(t,3)*x[3]+3*pow(t,2)*(1-t)*x[2]+3*pow((1-t),2)*t*x[1]+pow((1-t),3)*x[0];
    put_y = pow(t,3)*y[3]+3*pow(t,2)*(1-t)*y[2]+3*pow((1-t),2)*t*y[1]+pow((1-t),3)*y[0];
    putpixel(put_x,put_y,2);
    }
    getch();
    closegraph();
}