//WAP to perform a fixed point rotation of square

#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <dos.h>
#include <math.h>
#include <graphics.h>

int main(void)
{
    clrscr();
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "..\\BGI");
    int x[2]={150,250};
    int y[2]={150,250};
    int angle=60;
    int t=-5;
    putpixel(x[0], y[0], 15);
    putpixel(x[0], y[1], 15);
    putpixel(x[1], y[0], 15);
    putpixel(x[1], y[1], 15);

    rectangle(x[0], y[0], x[1], y[1]);
    printf("%d\t%d\t%d\t%d\t",x[0],y[0],x[1],y[1]);
    double th = angle * 3.141459 / 180;
    double cs = cos(th);
    double sn=sin(th);
    /*for(int i=0;i<2;i++)
    {
	for(int j=0;j<2;j++)
	{
	    x[i] = floor((x[i] * cs) - (y[j] * sn) + ((t * cs) - (t * sn) - t));
	    y[j] = floor((x[i] * sn) + (y[j] * cs) + ((t * cs) + (t * sn) - t));
	}
    }*/

    x[0] = floor((x[0] * cs) - (y[0] * sn) + ((t * cs) - (t * sn) - t));
    y[0] = floor((x[0] * sn) + (y[0] * cs) + ((t * cs) + (t * sn) - t));

    x[0] = floor((x[0] * cs) - (y[1] * sn) + ((t * cs) - (t * sn) - t));
    y[1] = floor((x[0] * sn) + (y[1] * cs) + ((t * cs) + (t * sn) - t));

    x[1] = floor((x[1] * cs) - (y[0] * sn) + ((t * cs) - (t * sn) - t));
    y[0] = floor((x[1] * sn) + (y[0] * cs) + ((t * cs) + (t * sn) - t));

    x[1] = floor((x[1] * cs) - (y[1] * sn) + ((t * cs) - (t * sn) - t));
    y[1] = floor((x[1] * sn) + (y[1] * cs) + ((t * cs) + (t * sn) - t));

    setcolor(2);
    printf("\n%d\t%d\t%d\t%d\t",x[0],y[0],x[1],y[1]);
    rectangle(x[0], y[0], x[1], y[1]);
    getch();

    return 0;
}