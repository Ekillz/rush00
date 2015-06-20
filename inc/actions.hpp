/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaueur <chaueur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 19:55:19 by chaueur           #+#    #+#             */
/*   Updated: 2015/06/20 20:49:46 by chaueur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ACTIONS_HPP

# define ACTIONS_HPP

void		get_action( int *action );
void		print_debug( void );
void		apply_action( int action, Player *p );
void		main_loop( Player *p, Enemy *e );
void		scroll_objects( Enemy *e );

#endif
