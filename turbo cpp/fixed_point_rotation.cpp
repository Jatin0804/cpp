#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<dos.h>
#include<math.h>
#include<graphics.h>

int main(void)
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "..\\BGI");
    int x1=50,x2=150,y1=50,y2=150;
    putpixel(x1, y1, 15);
    putpixel(x1, y2, 15);
    putpixel(x2, y1, 15);
    putpixel(x2, y2, 15);
    rectangle(x1,,150,50);
    double th=90*3.141459/180;
    int tx=5,ty=5;
    double cs=cos(th);
    printf("Cos : %f\n",cs);
    double m1[3][3]={{cos(th),-sin(th),((-tx*cos(th))+(ty*sin(th))+tx)},
                   {sin(th),cos(th),((-tx*sin(th))-(ty*cos(th))+ty)},
                   {0,0,1}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%.1f\t", m1[i][j]);
        printf("\n");
    }
    int m2[3][4]={{5,15,15,5},
                {5,5,15,15},
                {1,1,1,1}};
    
    double sum;
    double mul[3][4];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            for (int k = 0; k < 3; k++)
                sum = sum + m1[i][k] * m2[k][j];

            mul[i][j] = sum;
            sum = 0;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
            printf("%.1f\t", mul[i][j]);
        printf("\n");
    }
    
    rectangle(mul[0][3],mul[1][2],mul[1][1],mul[0][0]);

    return 0;
}