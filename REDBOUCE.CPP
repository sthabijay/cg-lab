#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>

void main()
{
int gd = DETECT, gm;
initgraph(&gd, &gm, "C:/TURBOC3/BGI");

// 640 x 480
for(int j=0; j<=3; j++)
{

for(int i=0; i<250; i=i+5)
{
delay(10);
cleardevice();
circle(320,100+i,50);
setfillstyle(SOLID_FILL, RED);
floodfill(321,101+i,15);
}

if (j<3)
{

for(i=0; i<250; i=i+5)
{
delay(10);
cleardevice();
circle(320,350-i,50);
setfillstyle(SOLID_FILL, RED);
floodfill(321,351-i,15);
}

}

}

getch();
closegraph();

}