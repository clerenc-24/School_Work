#include <utility>
#include <ncurses.h>
#include <list>

class Snake {
    private:
        typedef coord std::pair<int,int>;
        coord head(int x,int y);
        std::list<coord>;
        int grow_amount; //how much the snake needs to grow

    public:
        void move(int dx,int dy);
        void eatapple(){
            grow_amount ++;
            };
        bool death(int dx, int dy);
};

int main(){

    return 0;
}
