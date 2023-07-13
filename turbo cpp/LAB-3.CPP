//WAP to implement bresenhams line algo

#include<stdio.h>
#include <iostream.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>

void main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "..\\BGI");

    float x1, y1, x2, y2, xk, yk, m=0, dx, dy, i;

    cout << "Enter the initial coordinates of line : \t";
    cin >> x1 >> y1;
    cout << "Enter the final coordinates of line : \t";
    cin >> x2 >> y2;

    dx = x2 - x1;
    dy = y2 - y1;
    float dx2 = 2 * dx;
    float dy2 = 2 * dy;
    float dy_dx = dy2 - dx2;
    float p0 = dy2 - dx;
    float pk=p0;
    if (dx != 0)
        m = dy / dx;

    putpixel(x1, y1, 15);
    putpixel(x2, y2, 15);

    xk = x1;
    yk = y1;
    cout << "dx:" << dx << "\tdy:" << dy << "\tm:" << m;
    getch();

    for(i=0;i<dx;i++)
    {
	if(pk<0)
	{
	    xk=xk+1;
	    pk=pk+dy2;
	    putpixel(xk,yk,2);
	    delay(10);
	}
	else
	{
	    xk=xk+1;
	    yk=yk+1;
	    pk=pk+dy_dx;
	    putpixel(xk,yk,2);
	    delay(10);
        }
    }
    getch();

}