// Bresenham's (Lab 2)
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
int x,y,x1,y1,x2,y2,p,dx,dy;
printf("\nEnter the x-coordinate of the first point:");
scanf("%d",&x1);
printf("\nEnter the y-coordinate of the first point: ");
scanf("%d",&y1);
printf("\nEnter the x-coordinate of the second point:");
scanf("%d",&x2);
printf("\nEnter the y-coordinate of the second point:");
scanf("%d",&y2);
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
outtextxy(150,50,"Bresenham's'");
x=x1;
y=y1;
dx=x2-x1;
dy=y2-y1;
putpixel(x,y,2);
p=(2*dy-dx);
while(x<=x2)
{
if(p<0)
{
x=x+1;
p=p+2*dy;
}
else
{
x=x+1;
y=y+1;
p=p+(2*dy)-(2*dx);
}
putpixel(x,y,7);
}
outtextxy(x1+1,y1+2,"Initial Point");
outtextxy(x2+1,y2+1,"Final Point");
getch();
closegraph();
}
