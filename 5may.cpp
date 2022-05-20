#include <ncurses.h>

int main(){
	initscr();
	
	addstr(
	"Hello world ya masepa! \n"
	"From budapest\n"
	"Press any key to exit\n"
	);
	getch();
	flushinp();	
	
	endwin();
return 0;		
}
