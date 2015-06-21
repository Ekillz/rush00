/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   screen.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaueur <chaueur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 16:42:36 by chaueur           #+#    #+#             */
/*   Updated: 2015/06/21 16:33:55 by chaueur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

void		print_score( int score )
{
	/* HUD. */
  	mvprintw(0, 0, "Score: %5d", score);
}

void		scr_end( void )
{
	endwin();
	/* print score */
}

void		scr_upd( Player *p, Enemy *horde, Object *objs )
{
	/* clear window */
	erase();	

	/* Position cursor on player. */
	mvprintw( p->getY(), p->getX(), PLAYER );
	move( p->getY(), p->getX() );

	/* Update enemies and projectiles */
	col::updatePos( horde, objs );

	/* Check enemies and projectiles */
	col::checkPos( horde, objs );

	/* Check projecitles collision */
	col::checkHit( p, horde, objs );

	if ( col::checkCol( p, horde, objs ) == 1 || col::checkCol( p, horde, objs ) == 2 )
		sleep(5);

	print_score( p->getScore() );
	refresh();
}

void		scr_init( void )
{
	int			max_y, max_x;

	initscr();
	curs_set(0); /* Hide cursor */
	getmaxyx(stdscr, max_y, max_x);
	if ( max_x < MAX_W || max_y < MAX_H )
	{
		endwin();
		printf( "Screen must be at least %dpx / %dpx\n", MAX_W * 8, MAX_H * 16 );
		exit(0);
	}

	atexit( scr_end );
	noecho();
	keypad(stdscr, TRUE);
	timeout(0);
}
