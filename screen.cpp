#include <ncurses.h>

static void		scr_end( void )
{
	endwin();
	printf("Score : %d\n", score);
}

static void		scr_upd( void )
{
	erase();					/* clear window */

}

static void		scr_init( void )
{
	int			max_y, max_x;

	initscr();

	getmaxyx(stdscr, max_y, max_x);
	if ( max_x < MAX_W || max_y < MAX_H )
	{
		endwin();
		printf( "Screen must be at least %dx / %dy\n", MAX_W, MAX_H );
		exit(0);
	}

	atexit( screen_end );
	noecho();
	keypad(stdscr, TRUE);
	timeout(0);
}

static void		get_action( int *action )
{
	*action = 0

	while ( (c = getch() ) != ERR )
	{
			switch ( c )
			{
				case	KEY_RESIZE:
					return 0;
				case KEY_UP:
			        *action = ACTION_MOVE_UP;
			        break;
			    case KEY_DOWN:
			        *action = ACTION_MOVE_DOWN;
			        break;
			    case ' ':
			        *action = ACTION_SHOOT;
			        break;
			    case 'q':
			    	exit(0);
			    default:
			    	break;
			}
	}
}

static void		apply_action( int action )
{
	switch ( action )
	{
		case ACTION_MOVE_UP:
      		/* INC PLAYER Y */
      		break;
	    case ACTION_MOVE_DOWN:
    	  	/* DEC PLAYER Y */
      		break;
    	case ACTION_SHOOT:
      		/* SPAWN SHOT */
      		break;
	    default:
	      	break;
	}
}

static void		get_player_inputs( void )
{
	int		action;

	while ( 42 )
	{
		get_action( &action );

		apply_action( action);
	}
}

int		main(void)
{
	int		ch;

	scr_init();

	scr_upd();

	get_player_inputs();

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
