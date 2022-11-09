#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>

void main()
{
int gd = DETECT, gm;
initgraph(&gd, &gm, "C:/TURBOC3/BGI");

rectangle(50,50,150,100);
setfillstyle(SOLID_FILL, RED);
floodfill(51,51,15);

rectangle(350,125,450,175);
setfillstyle(SOLID_FILL, GREEN);
floodfill(351,126,15);

delay(1000);

for(int i=1; i<400; i=i+10)
{
delay(20);
cleardevice();

rectangle(50+i,50,150+i,100);
setfillstyle(SOLID_FILL, RED);
floodfill(51+i,51,15);

rectangle(350-i/2,125,450-i/2,175);
setfillstyle(SOLID_FILL, GREEN);
floodfill(351-i/2,126,15);
}

delay(1000);

for(i=1; i<300; i=i+10)
{
delay(20);
cleardevice();

rectangle(450,50+i,550,100+i);
setfillstyle(SOLID_FILL, RED);
floodfill(451,51+i,15);

rectangle(150,125+i/2,250,175+i/2);
setfillstyle(SOLID_FILL, GREEN);
floodfill(151,126+i/2,15);
}

delay(1000);

for(i=1; i<400; i=i+10)
{
delay(20);
cleardevice();

rectangle(450-i,350,550-i,400);
setfillstyle(SOLID_FILL, RED);
floodfill(451-i,351,15);

rectangle(150+i/2,275,250+i/2,325);
setfillstyle(SOLID_FILL, GREEN);
floodfill(151+i/2,276,15);
}

delay(1000);

for(i=1; i<300; i=i+10)
{
delay(20);
cleardevice();

rectangle(50,350-i,150,400-i);
setfillstyle(SOLID_FILL, RED);
floodfill(51,351-i,15);

rectangle(350,275-i/2,450,325-i/2);
setfillstyle(SOLID_FILL, GREEN);
floodfill(351,276-i/2,15);
}

getch();
closegraph();
}