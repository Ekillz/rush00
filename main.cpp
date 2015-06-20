#include <ncurses.h>
#include "screen.hpp"
#include "data.hpp"

static int		player_x;
static int		player_y;

int		main(void)
{
	data_init( player_y, player_x );
	scr_init();
	scr_upd( player_y, player_x );

	get_player_inputs( &player_y );

	// ch = getch();				/* Wait for user input */
	// if ( ch == KEY_F(1) )		/* Without keypad enabled this will */
	// 	printw("F1 Key pressed");
	// else
	// {
	// 	printw("The pressed key is ");
	// 	attron(A_BOLD);
	// 	printw("%c", ch);
	// 	attroff(A_BOLD);
	// }
	// refresh();
	// getch();
	// endwin();					/* End curses mode		  */
	return 0;
}
