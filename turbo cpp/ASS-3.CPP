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
    cout<<"For name Jatin : "<<endl;

    //Alphabet J
    setlinestyle(0,0,3);
    setcolor(RED);
    line(150,200,150,300);
    line(151,200,151,300);
    line(140,200,161,200);
    line(150,300,120,300);
    line(120,300,120,270);

    //Alphabet A
    setcolor(BLUE);
    line(180,240,180,300);
    line(230,240,230,300);
    line(205,200,180,240);
    line(205,200,230,240);
    line(180,245,230,245);
    line(180,246,230,246);

    //Alphabet T
    setcolor(GREEN);
    line(280,200,280,300);
    line(250,200,310,200);
    //putpixel(250,202,14);
    line(250,200,250,205);
    line(310,200,310,205);
    //circle(252,202,1);
    line(250,205,255,200);
    line(310,205,305,200);

    //Alphabet I
    setcolor(CYAN);
    line(355,200,355,300);
    line(330,200,380,200);
    line(335,300,375,300);

    //Alphabet N
    setcolor(10);
    line(410,200,410,300);
    line(410,200,460,300);
    line(460,200,460,300);


    getch();
}