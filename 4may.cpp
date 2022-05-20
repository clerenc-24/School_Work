#include <ncurses.h>
#include "ncurses_base.h"
#include <utility>
#include <list>
//snake game
using namespace std;
typedef pair std::coord<int,int>;

class Snake{
    private:
        coord head; 
        std::list <coord> body;
        int grow_amount;
        
    public:
        void move(int dx,int dy){}
        void eatapple(){grow_amount++;}
        bool checkdeath(int dx,int dy);
        void render();

};

int main(){
    
    NcursesInterface nc;
    addstr("Helloworld");
    char ch = getch();
    int x = 20,y = 15;

    while(ch != 'q'){

        if (ch == KEY_UP){
            x--;
            mvaddch(x,y,'@');
        }
        if (ch == KEY_LEFT){
            y--;
            mvaddch(x,y,'@');
        }
        
        if (ch == KEY_DOWN){
            x++;
            mvaddch(x,y,'@');    
        } 
        if (ch == KEY_RIGHT){
            y++;
            mvaddch(x,y,'@');    
        }
        ch = getch();
    }
 //   getch();    
    return 0;
    }
