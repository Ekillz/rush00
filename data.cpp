/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaueur <chaueur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 13:53:38 by chaueur           #+#    #+#             */
/*   Updated: 2015/06/20 17:10:14 by chaueur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "screen.hpp"

static void		free_obj( void )
{
	return;
}

void			data_init( int player_y, int player_x )
{
	player_x = MAX_W / 2;
	player_y = MAX_H;

	atexit( free_obj );
}
