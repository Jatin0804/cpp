//English language font generation

#include <stdio.h>
#include <iostream.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>

void main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "..\\BGI");
    cout<<"For name Anjali : "<<endl;


    //Alphabet A
    setlinestyle(0,0,3);
    setcolor(BLUE);
    line(100,240,100,300);
    line(150,240,150,300);
    line(125,200,100,240);
    line(125,200,150,240);
    line(100,245,150,245);
    line(100,246,150,246);


    //Alphabet N
    setcolor(10);
    line(180,200,180,300);
    line(180,200,230,300);
    line(230,200,230,300);


    //Alphabet J
    setcolor(RED);
    line(285,200,285,300);
    //line(151,200,151,300);
    line(275,200,295,200);
    line(285,300,255,300);
    line(255,300,255,270);

    //Alphabet A
    setcolor(BLUE);
    line(320,240,320,300);
    line(370,240,370,300);
    line(345,200,370,240);
    line(345,200,320,240);
    line(370,245,320,245);
    line(370,246,320,246);


    //Alphabet L
    setcolor(GREEN);
    line(410,200,410,300);
    line(405,200,415,200);
    line(407,300,450,300);
    line(450,297,447,300);


    //Alphabet I
    setcolor(CYAN);
    line(490,200,490,300);
    line(470,200,510,200);
    line(465,300,515,300);


    getch();
}