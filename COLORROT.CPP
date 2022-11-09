#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>

void main()
{
int gd = DETECT, gm;
initgraph(&gd, &gm, "C:/TURBOC3/BGI");

for(int i=1; i<400; i=i+10)
{
delay(20);
cleardevice();
rectangle(50+i,50,150+i,100);
setfillstyle(SOLID_FILL, RED);
floodfill(51+i,51,15);
}

delay(1000);

for(i=1; i<300; i=i+10)
{
delay(20);
cleardevice();
rectangle(450,50+i,550,100+i);
setfillstyle(SOLID_FILL, GREEN);
floodfill(451,51+i,15);
}

delay(1000);

for(i=1; i<400; i=i+10)
{
delay(20);
cleardevice();
rectangle(450-i,350,550-i,400);
setfillstyle(SOLID_FILL, YELLOW);
floodfill(451-i,351,15);
}

delay(1000);

for(i=1; i<300; i=i+10)
{
delay(20);
cleardevice();
rectangle(50,350-i,150,400-i);
setfillstyle(SOLID_FILL, BLUE);
floodfill(51,351-i,15);
}

getch();
closegraph();
}