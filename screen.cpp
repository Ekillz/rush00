/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   screen.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaueur <chaueur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 16:42:36 by chaueur           #+#    #+#             */
/*   Updated: 2015/06/20 17:21:12 by chaueur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ncurses.h>
#include "screen.hpp"
#include <unistd.h>

void		scr_end( void )
{
	endwin();
	/* print score */
}

void		scr_upd( int player_x, int player_y )
{
	erase();					/* clear window */

	/* Position cursor on player. */
	mvaddch(player_y, player_x, PLAYER);
	move(player_y, player_x);

	refresh();
}

void		scr_init( void )
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

	atexit( scr_end );
	noecho();
	keypad(stdscr, TRUE);
	timeout(0);
}

void		get_action( int *action )
{
	int		c = 0;
	*action = 0;

	while ( (c = getch() ) != ERR )
	{
			switch ( c )
			{
				case	KEY_RESIZE:
					return;
				case KEY_LEFT:
			        *action = ACTION_MOVE_LEFT;
			        break;
			    case KEY_RIGHT:
			        *action = ACTION_MOVE_RIGHT;
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

void		print_debug( void )
{
	printw("hi");
}

void		apply_action( int action, int *player_x )
{
	switch ( action )
	{
		case ACTION_MOVE_LEFT:
			if ( *player_x > 0 )
      			(*player_x)--;
      		/* debug */
			print_debug();
			printw("hi");
      		break;
	    case ACTION_MOVE_RIGHT:
	    	if ( *player_x < MAX_W )
    	  		(*player_x)++;
      		break;
    	case ACTION_SHOOT:
      		/* SPAWN SHOT */
      		break;
	    default:
	      	break;
	}
}

void		get_player_inputs( int *player_x )
{
	int		action;

	while ( 42 )
	{
		get_action( &action );

		apply_action( action, player_x );

		/* Redraw screen. */
	    scr_upd( *player_x, MAX_H );
	    usleep(100000);
	}
}
