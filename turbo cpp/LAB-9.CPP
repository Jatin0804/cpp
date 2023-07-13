//Wap for bezier curve 

#include<stdio.h>
#include <iostream.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>
#include<math.h>

void main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "..\\BGI");
    int x[4],y[4];
    double put_x,put_y,t;
    settextstyle(1,0,1);
    printf("Enter the coordinates of curve : \n");
    for(int i=0;i<4;i++)
    {
	printf("%d coordinates : ",i+1);
	cin>>x[i]>>y[i];
	putpixel(x[i],y[i],RED);
    }
    for(t=0.0;t<=1.0;t+=0.001)
    {
        put_x = pow(1 - t, 3) * x[0] + 3 * t * pow(1 - t, 2) * x[1] + 3 * t * t * (1 - t) * x[2] + t * t * t * x[3];
        put_y = pow(1 - t, 3) * y[0] + 3 * t * pow(1 - t, 2) * y[1] + 3 * t * t * (1 - t) * y[2] + t * t * t * y[3];
        putpixel(put_x,put_y,15);
    }

    getch();
}