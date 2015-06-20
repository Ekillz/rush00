/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   screen.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaueur <chaueur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 13:46:35 by chaueur           #+#    #+#             */
/*   Updated: 2015/06/20 19:01:14 by chaueur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCREEN_HPP

# define SCREEN_HPP

# define MAX_W		200
# define MAX_H		100

#include "data.hpp"

void		scr_end( void );
void		scr_upd( Player *p );
void		scr_init( void );
void		get_action( action_t *action );
void		apply_action( action_t action );
void		get_player_inputs( Player *p );

#endif /* SCREEN_HPP */
