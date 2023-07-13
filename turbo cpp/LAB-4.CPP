//WAP to implement mid point circle algo

#include<stdio.h>
#include <iostream.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>

void main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "..\\BGI");
    int x_c, y_c, r,i;

    cout << "Enter the centre coordinates of circle : \t";
    cin >> x_c >> y_c;
    cout << "Enter the radius of circle : \t";
    cin >> r;    
    putpixel(x_c, y_c, 15);

    int x=r , y=0;
    float p=1-r;
    if(r>0)
    {
        putpixel(x + x_c, y + y_c, 2);
        putpixel(x + x_c, -y + y_c, 3);
        putpixel(y + x_c, x + y_c, 4);
        putpixel(-y + x_c, x + y_c, 5);
    }

    while(x>y)
    {
        y++;

        if(p<=0)
            p = p + 2 * y + 1;
        else
        {
            x--;
            p = p + 2 * y - 2 * x + 1;
        }

        if(x<y)
        break;

        putpixel(x + x_c, y + y_c, 2);
        putpixel(-x + x_c, y + y_c, 3);
        putpixel(x + x_c, -y + y_c, 4);
        putpixel(-x + x_c, -y + y_c, 5);

        if(x!=y)
        {
        putpixel(y + x_c, x + y_c, 2);
        putpixel(-y + x_c, x + y_c, 3);
        putpixel(y + x_c, -x + y_c, 4);
        putpixel(-y + x_c, -x + y_c, 5);
        }
    }
    getch();
}