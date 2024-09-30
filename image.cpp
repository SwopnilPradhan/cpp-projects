#include <graphics.h>
#include <iostream>
int main(){
	initwindow(600,500,"Tutorial");
	setbkcolor(BLACK);
	readimagefile("ganesh.jfif" , 100,200,300,300);
	setcolor(WHITE);
	settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
	outtextxy(100,100,"hello");
	getch();
	closegraph();
}
