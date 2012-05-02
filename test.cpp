#include <ncurses.h>

int main()
{	
	int ch, rows, cols;
	
	initscr();			/* Start curses mode 		  */
	raw();
	keypad(stdscr, TRUE);
	
	noecho();
	
	getmaxyx(stdscr, rows, cols);
	
	
	printw("Hello World !!!");	/* Print Hello World	  */
	
	ch = getch();
	
	if( ch == KEY_F(1)) {
		printw("F1 Pressed");
	} else {
		printw("The pressed key is ");
		attron(A_BOLD);
		printw("%c", ch);
		attroff(A_BOLD);
	}
	refresh();			/* Print it on to the real screen */
	
	
	
	getch();			/* Wait for user input */
	endwin();			/* End curses mode		  */

	return 0;
}
