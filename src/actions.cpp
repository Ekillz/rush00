/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaueur <chaueur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 19:28:02 by chaueur           #+#    #+#             */
/*   Updated: 2015/06/21 18:09:25 by emammadz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

void		get_action( int *action )
{
	int		c = 0;
	*action = 0;

	while ( (c = getch() ) != ERR )
	{
			switch ( c )
			{
				case	KEY_RESIZE:
					exit(0);
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

void		apply_action( int action, Player *p, Object *objs )
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
    		col::createObject( objs, p->getX() + 1, p->getY() - 1, "fShot" );
      		break;
	    default:
	      	break;
	}
}

void		random_generate( Enemy *horde, Object *objs )
{
	int		seed;

	int count = 0;
	switch ( rand() % 3 )
	{
		case		1:
			col::createEnemy( horde, random() % MAX_W, 0 );
			seed = rand() % MAX_ENEMY;
			if ( horde[seed].getChp() )
				col::createObject( objs, horde[seed].getX(), horde[seed].getY() + 1, "eShot" );
			break;
		case		2:
			if (count < MAX_OBJECT - 20)
			{
				count++;
				col::createObject( objs, random() % MAX_W, 0, "obstacle" );
			}
			break;
		case		3:
			break;
		default:
			break;
	}
}

void		main_loop( Player *p, Enemy *horde, Object *objs )
{
	int		action;

	while ( 42 )
	{
		get_action( &action );
		apply_action( action, p, objs );
		random_generate( horde, objs );
		// scroll_objects( horde, objs );
		/* Redraw screen. -> give array of instance */
	    scr_upd( p, horde, objs );
	    usleep(100000);
	}
}
