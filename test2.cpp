#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <ncurses.h>
#include <string.h>

int main()
{
  // curses 초기화
  //WINDOW *w;
  int i, j, m, n;
  int rows, cols, rows1, cols1;
  WINDOW * win = newwin(rows1, cols1, n, m);
  initscr();
  curs_set(1); // 커서 보이게 하는 옵션..?
  using namespace std;
  noecho(); // ?? 일단 넣어봤음
  cbreak(); //?
  box(win, 0, 0);  // 안의 숫자 바꾸면 라인 형태 바뀜
  
  for (i = 0; i < rows; i++){
    
      for (j = 0; j < cols; j++) {
        
        mvprintw(i, j, "좀 되라 썅");
        #define ACS_HLINE NCURSES_ACS('q')
         
        whline(win, ACS_HLINE, cols); // 중간에 선 긋기...아놔 안되네 썅
    //   WINDOW * win = newwin(m, n, rows1, cols1);
    // initscr();
    for (m <= 0; m < rows1; m++)
    {

      for (n <= 0; n < cols1; n++) {
        
        mvprintw(m, n, "좀 되라 썅썅");
      } 

      }
    }
  }
  
  getch(); // end main
  endwin();
  return 0;
}
