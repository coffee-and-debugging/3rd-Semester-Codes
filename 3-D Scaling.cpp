// 3-D Scaling (Lab 9)

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<process.h>
#include<graphics.h>

int x1,x2,Y1,y2,mx,my,depth;
void draw();
void scale();
int main()
{
printf("\n\t\t3D Scaling\n\n");
printf("\nEnter 1st top value(x1,Y1):");
scanf("%d%d",&x1,&Y1);
printf("Enter right bottom value(x2,y2):");
scanf("%d%d",&x2,&y2);
int gd=DETECT,gm,c;
initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
outtextxy(200,150,"3-D Scaling");
depth=(x2-x1)/4;
mx=(x1+x2)/2;
my=(Y1+y2)/2;
draw();
scale();
getch();
}
void draw()
{
bar3d(x1,Y1,x2,y2,depth,1);
}
void scale()
{
int x,y,a1,a2,b1,b2,dep;
printf("\n\n Enter scaling Factors:");
scanf("%d%d",&x,&y);
a1=mx+(x1-mx)*x;
a2=mx+(x2-mx)*x;
b1=my+(Y1-my)*y;
b2=my+(y2-my)*y;
dep=(a2-a1)/4;
bar3d(a1,b1,a2,b2,dep,1);
setcolor(5);
draw();
}
