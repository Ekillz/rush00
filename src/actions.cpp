/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaueur <chaueur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 19:28:02 by chaueur           #+#    #+#             */
/*   Updated: 2015/06/20 20:54:19 by chaueur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

void		scroll_objects( Enemy *e )
{
	if ( e->getY() + 1 < MAX_H)
	{
		e->setY( e->getY() + 1 );
		e->genMov();
	}
	else
		e->setY( MAX_H + 5 );
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

void		main_loop( Player *p, Enemy *e )
{
	int		action;

	while ( 42 )
	{
		get_action( &action );
		apply_action( action, p );
		scroll_objects( e );
		/* Redraw screen. -> give array of instance */
	    scr_upd( p, e );
	    usleep(100000);
	}
}
