#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<graphics.h>
void stark14()
{ int p=0,q,x;
int points1[]={80,80,100,80,90,100,80,80};
int points2[]={420,80,440,80,430,100,420,80};
int points3[]={430,100,400,170,460,170,430,100};
int points4[]={415,135,445,135,430, 170,415,135};
int points5[]={80,310,100,310,90,330,80,310};
int points6[]={420,310, 440,310,430,330,420,310};
int points7[]={430,330,400,360,460,360,430,390,400,360,460,360,430,330};
  initgraph(&p,&q,"..\\bgi");
 setcolor(WHITE);
  setlinestyle(3,1,3);
    rectangle(0, 0, getmaxx(), getmaxy());
  setbkcolor(BLACK);
  settextstyle(10,0,3);
  setcolor(YELLOW);
  outtextxy(195,0,"<<LOCKETS>>");
  outtextxy(28,195,"401");
  outtextxy(350,195,"402");
  outtextxy(34,395,"403");
  outtextxy(350,395,"404");
    setlinestyle(0,1,3);
  setcolor(WHITE);
  line(320,50,320,450);
  line(0,250,635,250);
  line(0,449,635,449);
  setcolor(0);
  setfillstyle(10,CYAN);
  bar3d(9,452,243,477,0,0);
   settextstyle(1,0,2);
  setcolor(LIGHTMAGENTA);
  outtextxy(18,451,"ENTER YOUR CHOICE:");
  setlinestyle(0,1,1);
  setcolor(YELLOW);
  drawpoly(4,points1);
  circle(90,124,25);
  setfillstyle(8,YELLOW);
  floodfill(90,124,YELLOW);
  setfillstyle(1,RED);
  fillellipse(90,124,10,24);
  drawpoly(4,points2);
  drawpoly(4,points3);
  drawpoly(4,points4);
  circle(430,145,9);
  setfillstyle(1,MAGENTA);
  floodfill(430,145,YELLOW);
  setcolor(WHITE);
  drawpoly(4,points5);
  setfillstyle(6,WHITE);
  fillellipse(90,358,15,30);
  setfillstyle(1,LIGHTBLUE);
  fillellipse(90,358,8,18);
  setcolor(YELLOW);
  drawpoly(4,points6);
  setfillstyle(9,LIGHTRED);
  fillpoly(8,points7);
  line(430,330,430,390);
  gotoxy(30,30);
 cin>>x;
 switch(x)
 {
 case 401:cleardevice();
	  setbkcolor(BLACK);
	  setcolor(WHITE);
	  cout<<"-------------------------------------------------------------------------------";
	  settextstyle(6,0,2);
	  outtextxy(90,150,"JEWELLERY CODE-401");
	  outtextxy(90,180,"PIECES IN STOCK ARE-10");
	  outtextxy(90,210,"PIECES SOLD TILL DATE ARE-6");
	  outtextxy(90,240,"SUPPLIER OF THIS PRODUCT:-MR.S.PANDEY");
	  break;
 case 402:cleardevice();
	  setbkcolor(BLACK);
	  setcolor(WHITE);
	  cout<<"-------------------------------------------------------------------------------";
	  settextstyle(6,0,2);
	  outtextxy(90,150,"JEWELLERY CODE-402");
	  outtextxy(90,180,"PIECES IN STOCK ARE-14");
	  outtextxy(90,210,"PIECES SOLD TILL DATE ARE-10");
	  outtextxy(90,240,"SUPPLIER OF THIS PRODUCT:-MR.Y.AGARWAL");
	  break;
 case 403:cleardevice();
	  setbkcolor(BLACK);
	  setcolor(WHITE);
	  cout<<"-------------------------------------------------------------------------------";
	  settextstyle(6,0,2);
	  outtextxy(90,150,"JEWELLERY CODE-403");
	  outtextxy(90,180,"PIECES IN STOCK ARE-7");
	  outtextxy(90,210,"PIECES SOLD TILL DATE ARE-3");
	  outtextxy(90,240,"SUPPLIER OF THIS PRODUCT:-MR.T.KAPOOR");
	  break;
 case 404:cleardevice();
	  setbkcolor(BLACK);
	  setcolor(WHITE);
	  cout<<"-------------------------------------------------------------------------------";
	  settextstyle(6,0,2);
	  outtextxy(90,150,"JEWELLERY CODE-404");
	  outtextxy(90,180,"PIECES IN STOCK ARE-6");
	  outtextxy(90,210,"PIECES SOLD TILL DATE ARE-4");
	  outtextxy(90,240,"SUPPLIER OF THIS PRODUCT:-MR.S.AGARWAL");
	  break;
  default:cout<<"invalid choice";
 }
  getch();
  closegraph();
}