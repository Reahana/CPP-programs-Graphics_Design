//2D Transformation (Scaling)
#include <stdio.h>
#include <conio.h>
#include <graphics.h>
int main()
{
int x1, y1,x2,y2;
float scale;
int gdrive =DETECT, gmode;
initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
setcolor(5);
line(0,240,640,250);
line (320,0,320,400);
printf("Enter 1st point P(x1,y1)");
scanf("%d,%d",&x1,&y1);
printf("Enter 2nd point P(x2,y2)");
scanf("%d,%d",&x2,&y2);
setcolor(10);
rectangle(320+x1,240-y1,320+x2,240-y2);
printf("Enter scaling factor");
scanf("%f",&scale);
x2=(x2-x1)*scale+x1;
y2=(y2-y1)*scale+y1;
setcolor(5);
rectangle(320+x1,240-y1,320+x2,240-y2);
getch();
closegraph();
}
