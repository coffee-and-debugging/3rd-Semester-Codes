// 3-D Translation (Lab 8)
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<process.h>
#include<graphics.h>

int x1,x2,Y1,y2,mx,my,depth;

void draw();
void trans();

int main()
{
	printf("3D Translation\n");
	printf("\nEnter 1st top value(x1,Y1):");
	scanf("%d%d",&x1,&Y1);
	printf("Enter right bottom value(x2,y2):");
	scanf("%d%d",&x2,&y2);
	
	int gd=DETECT,gm,c;
	initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
	
	outtextxy(100,100,"3-D Translation");
	
	depth=(x2-x1)/4;
	mx=(x1+x2)/2;
	my=(Y1+y2)/2;
	
	trans();
	
	draw();
	
	getch();
}
void draw()
{
	bar3d(x1,Y1,x2,y2,depth,1);
}
void trans()
{
	int a1,a2,b1,b2,dep,x,y;
	printf("\n Enter the Translation Distances:");
	scanf("%d%d",&x,&y);
	
	a1=x1+x;
	a2=x2+x;
	b1=Y1+y;
	b2=y2+y;
	dep=(a2-a1)/4;
	
	bar3d(a1,b1,a2,b2,dep,1);
	setcolor(5);
	draw();
}
