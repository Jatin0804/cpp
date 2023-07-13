//WAP to implement mid point ellipse algo

#include<stdio.h>
#include <iostream.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>

void main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "..\\BGI");
    int x_c, y_c, rx,ry;

    cout << "Enter the centre coordinates of ellipse : \t";
    cin >> x_c >> y_c;
    cout << "Enter the minor radius of ellipse : \t";
    cin >> ry;
    cout << "Enter the major radius of ellipse : \t";
    cin >> rx;
    putpixel(x_c, y_c, 15);

    float x = 0, y = ry;
    float rx2 = rx * rx;
    float ry2 = ry * ry;
    float dx = 2 * ry2 * x;
    float dy = 2 * rx2 * y;
    float p1 = (ry2) - (rx2 * ry) + (0.25 * rx2);
    float p2 = (ry2 * ((x + 0.5) * (x + 0.5))) + (rx2 * ((y - 1) * (y - 1))) - (rx2 * ry2);

    //for region 1
    while(dx<dy)
    {
        putpixel(x + x_c, y + y_c, 2);
        putpixel(-x + x_c, y + y_c, 3);
        putpixel(x + x_c, -y + y_c, 4);
        putpixel(-x + x_c, -y + y_c, 5);

        if(p1<0)
        {
            x++;
            dx = dx + (2 * ry2);
            p1 = p1 + dx - dy + ry2;
        }
        else
        {
            x++;
            y--;
            dx = dx + (2 * ry2);
            dy = dy - (2 * rx2);
            p1 = p1 + dx - dy + ry2;
        }
    }

    //for region 2
    
    while(y>=0)
    {
        putpixel(x + x_c, y + y_c, 2);
        putpixel(-x + x_c, y + y_c, 3);
        putpixel(x + x_c, -y + y_c, 4);
        putpixel(-x + x_c, -y + y_c, 5);

        if(p2>0)
        {
            y--;
            dy = dy - 2 * rx2;
            p2 = p2 + rx2 - dy;
        }
        else
        {
            y--;
            x++;
            dx = dx + (2 * ry2);
            dy = dy - (2 * rx2);
            p2 = p2 = dx - dy + rx2;
        }
    }

    getch();
}