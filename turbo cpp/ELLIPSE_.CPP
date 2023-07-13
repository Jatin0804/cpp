#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main(void)
{
clrscr();
int gd=DETECT,gm;
initgraph(&gd,&gm,"..\\BGI");
int Rx,Ry;
printf("Enter the value of Rx : ");
scanf("%d",&Rx);
printf("Enter the value of Yx : ");
scanf("%d",&Ry);

int x=0, y=Ry,k;
//x[0]=0;
//y[0]=Ry;
int P1;
Rx2=(Rx)*(Rx);
Ry2=(Ry)*(Ry);
P1=((Ry2)-((Rx2)*(Ry))+((Rx2)/4));
while((2*(Ry2)*(x))<(2*(Rx2)*(y)))
{
if(P1[k]<0)
{
x++;
P1=P1+(Ry2
}
}

return 0;
}