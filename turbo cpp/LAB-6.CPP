//WAP for boundary fill and flood fill algo

#include<stdio.h>
#include <iostream.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>


void boundary_fill(int x,int y,int back_color,int f_Color,int bound_color)
{
    int col,i;
    col=getpixel(x,y);
    if((col!=f_Color)&&(col!=bound_color))
    {
        putpixel(x,y,f_Color);
	delay(10);
	boundary_fill(x - 1, y, back_color, f_Color, bound_color);
	boundary_fill(x + 1, y, back_color, f_Color, bound_color);
	boundary_fill(x, y - 1, back_color, f_Color, bound_color);
	boundary_fill(x, y + 1, back_color, f_Color, bound_color);
    }
}

void flood_fill(int x,int y,int back_color,int f_color)
{
    int col, i;
    col = getpixel(x, y);
    if (col == back_color)
    {
	putpixel(x, y, f_color);
	delay(10);
	flood_fill(x - 1, y, back_color, f_color);
	flood_fill(x + 1, y, back_color, f_color);
	flood_fill(x, y - 1, back_color, f_color);
        flood_fill(x, y + 1, back_color, f_color);
    }
}
void main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "..\\BGI");
    int back_color=0,f_color=14,bound_color=15;
    rectangle(140,140,190,190);
    boundary_fill(141,141,back_color,f_color,bound_color);
    flood_fill(141,141,14,13);
    flood_fill(141,141,13,11);
    getch();

}