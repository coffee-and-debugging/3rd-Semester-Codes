 // 2-D Scaling (Lab 6)
 #include<stdio.h> 
#include<conio.h> 
#include<graphics.h> 
#include<math.h>
int main()
{
float x1,y1,x2,y2,sx,sy,x3,y3,x4,y4; 
printf("Enter the starting point coordinates:");
scanf("%f %f",&x1,&y1);
printf("Enter the ending point coordinates:");
scanf("%f %f",&x2,&y2);
printf("Enter scaling factors sx,sy:\n");
scanf("%f%f",&sx,&sy);
//int gd=DETECT,gm;
//initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
initwindow(1920,1080);
outtextxy(100,80,"2-D Scaling");
setcolor(5);
line(x1,y1,x2,y2);
outtextxy(x2+2,y2+2,"Original line");
x3=x1*sx;
y3=y1*sy;
x4=x2*sx;
y4=y2*sy;
setcolor(7);
line(x3,y3,x4,y4);
outtextxy(x3+2,y3+2,"Line after scaling");
getch();
}
