#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>
#define x 320

void down(int y, int d)
{

for(int i=0; i<d; i=i+5)
{
delay(10);
cleardevice();
circle(x,y+i,75);
circle(x,y+i,50);
setfillstyle(SOLID_FILL, RED);
floodfill(x+1,y+1+i,15);
line(x-35,y-35+i,x+35,y+35+i);
line(x+35,y-35+i,x-35,y+35+i);
}

}

void up(int y, int d)
{

for(int i=0; i<d; i=i+5)
{
delay(10);
cleardevice();
circle(x,y-i,75);
circle(x,y-i,50);
setfillstyle(SOLID_FILL, RED);
floodfill(x+1,y+1-i,15);
line(x-35,y-35-i,x+35,y+35-i);
line(x+35,y-35-i,x-35,y+35-i);
}

}

void draw(int y)
{
circle(x,y,75);
circle(x,y,50);
setfillstyle(SOLID_FILL, RED);
floodfill(x+1,y+1,15);
line(x-35,y-35,x+35,y+35);
line(x+35,y-35,x-35,y+35);
}



void main()
{
int gd = DETECT, gm;
initgraph(&gd, &gm, "C:/TURBOC3/BGI");

draw(100);
delay(1000);

down(100,300);
up(400,200);
delay(1000);

down(200,200);
up(400,100);
delay(1000);

down(300,100);
up(400,50);
delay(1000);

down(350,50);

getch();
closegraph();

}