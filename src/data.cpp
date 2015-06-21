/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaueur <chaueur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 13:53:38 by chaueur           #+#    #+#             */
/*   Updated: 2015/06/21 18:30:11 by emammadz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

static void		free_obj( void )
{
	return;
}

void			data_init( Player *p )
{
	p = new Player;

	atexit( free_obj );
}
