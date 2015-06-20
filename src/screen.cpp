/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   screen.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaueur <chaueur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 16:42:36 by chaueur           #+#    #+#             */
/*   Updated: 2015/06/20 21:01:21 by chaueur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

void		scr_end( void )
{
	endwin();
	/* print score */
}

void		scr_upd( Player *p, Enemy *e )
{
	erase();					/* clear window */

	/* Position cursor on player. */
	if ( p )
	{
		mvprintw( p->getY(), p->getX(), PLAYER );
		mvprintw( p->getY(), p->getX(), PLAYER );	
		move( p->getY(), p->getX() );
	}
	if ( e )
	{
		mvprintw( e->getY(), e->getX(), ENEMY );
		mvprintw( e->getY(), e->getX(), ENEMY );	
	}

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
