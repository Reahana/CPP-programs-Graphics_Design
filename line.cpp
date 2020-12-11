//1. Draw lines  
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
 
void main()
 {
  int x=DETECT,y;
  initgraph(&x,&y,"C:\\TURBOC3\\BGI");
  line(100,200,120,278);
  line(50,100,70,179);
  getch();
  closegraph();
 }