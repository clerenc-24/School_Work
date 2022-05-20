
//LINK OPTIONS -lncurses
#ifndef GlobalGuardNcurses_IS_INCLUDED
#define GlobalGuardNcurses_IS_INCLUDED true
#include <ncurses.h>
#include <cstdlib>

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

int main(){
	addstr("=================================================================================================================================\n");	
	addstr(
	"Hello world ya masepa! \n"
	"From budapest\n"
	"Press any key to exit\n"
	);
	addstr("=================================================================================================================================\n");

	getch();

return 0;		
}
