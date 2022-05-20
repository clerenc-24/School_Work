// compile with
// `g++ <filename> -lncurses`
#include <cstdlib>
class NcursesInterface{
public:
    NcursesInterface(){
        initscr(); raw(); noecho(); intrflush( stdscr, false );
        keypad( stdscr, true ); curs_set( 0 );
        std::atexit( endNcurses );
    }

    static void endNcurses() {
        if (!isendwin()){
            refresh(); flushinp(); endwin();
        }
    }

    ~NcursesInterface(){
        endNcurses();
    }
};
