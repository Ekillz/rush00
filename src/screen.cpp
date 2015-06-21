/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   screen.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaueur <chaueur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 16:42:36 by chaueur           #+#    #+#             */
/*   Updated: 2015/06/21 19:42:15 by emammadz         ###   ########.fr       */
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
	int colision;
	/* clear window */
	erase();	

	/* Position cursor on player. */
	mvprintw( p->getY(), p->getX(), PLAYER );
	//move( p->getY(), p->getX() );


	/* Check enemies and projectiles */
	col::checkPos( horde, objs );

	/* Check projecitles collision */
	col::checkHit( p, horde, objs );


	colision = col::checkCol( p, horde, objs );
	if (colision == 1 || colision == 2)
		p->setChp(0);

	col::updatePos(p,  horde, objs );
	/* Update enemies and projectiles */
	if (p->getChp() == 0)
	{
		p->setScore(p->getScore() - 500);
		p->setChp(1);
	}

	print_score( p->getScore() );
	refresh();
}

void		scr_init( void )
{
	int			max_y, max_x;

	initscr();
	curs_set(0); /* Hide cursor */
	getmaxyx(stdscr, max_y, max_x);
	if ( max_x < MAX_W || max_y < 50 )
	{
		endwin();
		printf("%d y %d x\n", max_y, max_x);
		printf( "Screen must be at least %dpx / %dpx\n", MAX_W, MAX_H );
		exit(0);
	}
	atexit( scr_end );
	noecho();
	keypad(stdscr, TRUE);
	timeout(0);
}
