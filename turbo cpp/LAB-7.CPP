#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
#include<math.h>

void translation(int p[2][2],int t[2])
{
    setcolor(2);
    rectangle(p[0][0],p[0][1],p[1][0],p[1][1]);
    p[0][0]+=t[0];
    p[0][1] += t[1];
    p[1][0] += t[0];
    p[1][1] += t[1];
    rectangle(p[0][0], p[0][1], p[1][0], p[1][1]);
}

void scaling(int p[2][2],int t[2])
{
    setcolor(15);
    rectangle(p[0][0], p[0][1], p[1][0], p[1][1]);
    p[0][0] *= 2;
    p[0][1] *= 2;
    p[1][0] *= 2;
    p[1][1] *= 2;
    rectangle(p[0][0], p[0][1], p[1][0], p[1][1]);
}

void rotation(int p[2][2],int angle)
{
    float ang=angle*3.14/180;
    float c=cos(ang);
    float s=sin(ang);
    rectangle(p[0][0], p[0][1], p[1][0], p[1][1]);
    p[0][0]=p[0][0]*c-p[0][1]*s;
    rectangle(p[0][0], p[0][1], p[1][0], p[1][1]);
}

int main(void)
{
    int gd=DETECT,gm;
    initgraph(&gd,&gd,"..\\BGI");
    int p[2][2]={50,80,120,180};
    int t[2]={2,12};
    int angle=90,n=4;
    int choice;
    printf("Enter the choice : ");
    scanf("%d",&choice);
    switch(choice)
    {
	case 1:translation(p,t);
	break;
	case 2:scaling(p,t);
	break;
	case 3:rotation(p,angle);
	break;
	default:printf("Wrong choice.");
    }
    getch();
    return 0;
}