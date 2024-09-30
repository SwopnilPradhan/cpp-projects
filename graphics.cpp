#include <graphics.h>
int main(){
	initwindow(600,500,"Tutorial");
	setcolor(WHITE);
	settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
	outtextxy(100,100,"hello");
	getch();
	closegraph();
}
