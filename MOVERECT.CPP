#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>

void main()
{
int gd = DETECT, gm;
initgraph(&gd, &gm, "C:/TURBOC3/BGI");

rectangle(50,150,200,250);
setfillstyle(SOLID_FILL, RED);
floodfill(51,151,15);
delay(1000);

for(int i=1; i<400; i=i+5)
{
delay(20);
cleardevice();
rectangle(50+i,150,200+i,250);
setfillstyle(SOLID_FILL, RED);
floodfill(51+i,151,15);
}

getch();
closegraph();
}