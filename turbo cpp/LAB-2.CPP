//Write a progream to implement DDA(Digital Differential Analyzer) line algorithm.

#include <iostream.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>

void main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "..\\BGI");
    float x1,y1,x2,y2,xk,yk,m,dx,dy,i;

    cout<<"Enter the initial coordinates of line : \t";
    cin>>x1>>y1;
    cout << "Enter the final coordinates of line : \t";
    cin >> x2 >> y2;
    dx=x2-x1;
    dy=y2-y1;
	if (dx != 0)
		m = dy / dx;
	putpixel(x1,y1,15);
    putpixel(x2,y2,15);
    xk=x1;
    yk=y1;
    cout<<"dx:"<<dx<<"\tdy:"<<dy<<"\tm:"<<m;
    getch();

    if(dx==dy)
    {
	for(i=0;i<dx;i++)
	{
	if(x2>x1)
	{
	    xk=xk+1;
	    yk=yk+1;
	    putpixel(xk,yk,15);
	    delay(100);
	}
	if(x1>x2)
	{
	    xk=xk-1;
	    yk=yk-1;
	    putpixel(xk,yk,15);
	    delay(100);
	}
	}
    }
    else if ( dx == 0) // vertical line
    {
	for (i = 0; i < dy; i++)
	{
	    yk = yk + 1;
	    xk=xk;
	    putpixel(xk, yk, 15);
	    delay(100);
	}
    }
    else if (dy == 0) // horizontal line
    {
	for (i = 0; i < dx; i++)
	{
	    xk = xk + 1;
	    putpixel(xk, yk, 15);
	    delay(100);
	}
    }
    if (dx > dy)
    {
	for (i = 0; i < dx; i++)
	{
	    if(dx>0 && x1<x2 && y1>y2)
	    {
		xk = xk + 1;
		yk = yk + m;
		putpixel(xk, yk, 15);
		delay(100);
	    }
	    else if (dx < 0 && x1 > x2 && y1 > y2)
	    {
		xk = xk - 1;
		yk = yk - m;
		putpixel(xk, yk, 15);
		delay(100);
	    }
	}
    }
    if (dy > dx)
    {
	for (i = 0; i < dy; i++)
	{
	    if (dy > 0 && y1 < y2)
	    {
		xk = xk + (1/m);
		yk = yk + 1;
		putpixel(xk, yk, 15);
		delay(10);
	    }
	    if (dy < 0 && y1 > y2)
	    {
		xk = xk - (1/m);
		yk = yk - 1;
		putpixel(xk, yk, 15);
		delay(100);
	    }
	}
    }
    /*else if ( dx<0)
    {
	for (i = 0; i < dx; i++)
	{
	    xk = xk - 1;
	    yk=yk+m;
	    putpixel(xk, yk, 15);
	    delay(100);
	}
    }
    else if ( dy<0)
    {
	for (i = 0; i < dy; i++)
	{
	    xk = xk + (1/m);
	    yk=yk-1;
	    putpixel(xk, yk, 15);
	    delay(100);
	}
    } */

    getch();
}