#include <iostream>
#include <curses.h>


#include <string>
int main()
{
    WINDOW *w;
w = initscr();
curs_set(0);
    using namespace std;                        // start main
    int max_y = LINES - 1, max_x = COLS - COLS; // define in curses.h
    printw("Start Hello Ncurse!");
    move(3, 4);
    addch('3');
    mvaddch(20, 4, '5');
    string str_var = "max_y,max_x:" + to_string(int(LINES)) + ", " + to_string(int(COLS));
    mvaddstr(6, 4, str_var.c_str());
    mvprintw(max_y / 2, COLS / 2, "Middle Hello Ncurse!");
    getch(); // end main
    endwin();
    return 0;

}