#include <iostream>
#include <curses.h>
using namespace std;

int main() {
    WINDOW *w;
    w = initscr();
    curs_set(3);
    printw("Hello Goddamn Ncurse!");
    //refresh();
    getch();
    endwin();
    return 0;
} 