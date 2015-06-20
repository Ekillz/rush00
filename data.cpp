/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaueur <chaueur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 13:53:38 by chaueur           #+#    #+#             */
/*   Updated: 2015/06/20 13:56:48 by chaueur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "screen.hpp"

static int		player_x;
static int		player_y;

static void		free_obj( void )
{
	return;
}

void			data_init( void )
{
	player_x = 13;
	player_y = WIN_W / 2;

	atexit(free_obj);
}
