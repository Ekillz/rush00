/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   screen.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaueur <chaueur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 13:46:35 by chaueur           #+#    #+#             */
/*   Updated: 2015/06/20 16:10:41 by chaueur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCREEN_HPP

# define SCREEN_HPP

# define WIN_W		150
# define WIN_H		600

void		scr_end( void );
void		scr_upd( void );
void		scr_init( void );
void		get_action( action_t *action );
void		apply_action( action_t action );
void		get_player_inputs( void );

#endif /* SCREEN_HPP */
