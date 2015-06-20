/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   screen.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaueur <chaueur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 16:42:36 by chaueur           #+#    #+#             */
/*   Updated: 2015/06/20 18:57:43 by chaueur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

void		scr_end( void )
{
	endwin();
	/* print score */
}

void		scr_upd( Player *p )
{
	erase();					/* clear window */

	/* Position cursor on player. */
	mvaddch( p->getY(), p->getX(), PLAYER );
	move( p->getY(), p->getX() );

	refresh();
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

void		apply_action( int action, Player *p )
{
	switch ( action )
	{
		case ACTION_MOVE_LEFT:
			if ( p->getX() > 0 )
      			p->setX( p->getX() - 1 );
      		/* debug */
			print_debug();
			printw("hi");
      		break;
	    case ACTION_MOVE_RIGHT:
	    	if ( p->getX() < MAX_W )
    	  		p->setX( p->getX() + 1 );
      		break;
    	case ACTION_SHOOT:
      		/* SPAWN SHOT */
      		break;
	    default:
	      	break;
	}
}

void		get_player_inputs( Player *p )
{
	int		action;

	while ( 42 )
	{
		get_action( &action );

		apply_action( action, p );

		/* Redraw screen. */
	    scr_upd( p );
	    usleep(100000);
	}
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
