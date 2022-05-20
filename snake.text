
//LINK OPTIONS -lncurses
#ifndef GlobalGuardNcurses_IS_INCLUDED
#define GlobalGuardNcurses_IS_INCLUDED true
#include <ncurses.h>
#include <cstdlib>
#include <algorithm>

class GlobalGuardNcurses {
	static void endNcurses(){

	if(!isendwin()){
		refresh();
		flushinp();
		endwin();
		}
	}	
	public:
		GlobalGuardNcurses(){ //the aim of this function is to start "ncurses" well configured
		initscr();
		raw();
		noecho();
		intrflush(stdscr, false);
		keypad(stdscr,true);
		curs_set(0);
		std::atexit(endNcurses);
		}
		~GlobalGuardNcurses(){ //destructor of the class
		endNcurses();
		}
} the_GlobalGuardian_Object_For_Ncurses;
#endif //GlobalGuardNcurses_IS_INCLUDED

int crop_to_interval(int value,int imin,int imax){
	return std::min(std::max(value,imin),imax-1);
}

void try_to_crawl(int crawl_row, int crawl_col){
	
	int head_row=0,head_col=0;
		getyx(stdscr,head_row,head_col);

	int max_row=0,max_col=0;
		getmaxyx(stdscr,max_row,max_col);

	int next_row = crop_to_interval(head_row + crawl_row,0,max_row);
	
	int next_col = crop_to_interval(head_col + crawl_col,0,max_col); 

	if ((next_row != head_row)||(next_col != head_col)){
		mvaddch(head_row,head_col,'*');
		mvaddch(next_row,next_col,'@');
		move(next_row,next_col);
	}
}

void snake_event_loop(){
		
	addstr("\n\n\n\n\n\tSNAKE GAME\n\n");
	addstr("\n\n\n\n\tPress 'q' or 'Q' to quit\n\n\t"
	"Pree KEY_RIGHT or KEY_LEFT or KEY_UP or KEY_DOWN to play\n");	
	
	mvaddch(0,0,'@');
	move(0,0);
	
	for (int ch=getch();(ch != 'q')&&(ch != 'Q'); ch = getch()){
		if (ch==KEY_LEFT){

			try_to_crawl(0,-1);

		}else if(ch==KEY_UP){

			try_to_crawl(-1,0);

		}else if(ch==KEY_RIGHT){
		
			try_to_crawl(0,+1);

		}else if(ch==KEY_DOWN){
		
			try_to_crawl(+1,0);	
	
		}
	}
}


int main(){

	snake_event_loop();
		
	return 0;		
}





