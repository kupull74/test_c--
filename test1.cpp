#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <ncurses.h>
#include <string.h>

int main()
{
  initscr(); // curses 초기화
  WINDOW *w;
  w = initscr();
  curs_set(1); // 커서 보이게 하는 옵션..?
  using namespace std;
  noecho();     // ?? 일단 넣어봤음
  cbreak();     //?
  box(w, 0, 0); // 안의 숫자 바꾸면 라인 형태 바뀜
  int i, j, m, n;
  int rows, cols, rows1, cols1;
  for (i = 0; i < rows; i++)
  {

    for (j = 0; j < cols; j++)
    {

      mvprintw(i, j, "");

      for (m <= 0; m < rows - 5; m++)
      {

        for (n <= 0; n < cols - 5; n++)
        {

          mvprintw(m, n, "");
          //   WINDOW * win = newwin(m, n, rows1, cols1);
          // initscr();
        }
      }

      getch(); // end main
      endwin();
      return 0;
    }
  }
}
