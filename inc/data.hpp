/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaueur <chaueur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 13:57:14 by chaueur           #+#    #+#             */
/*   Updated: 2015/06/21 18:59:28 by emammadz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP

# define DATA_HPP

#include "header.hpp"

typedef enum
{
	ACTION_NONE,
	ACTION_MOVE_LEFT,
	ACTION_MOVE_RIGHT,
	ACTION_SHOOT,
} action_t;

void			data_init( Player *p );

# define PLAYER		"/^\\"
# define ENEMY		"+"
# define OBSTACLE	"o"
# define ESHOT		"|"
# define FSHOT		"|"
# define MAX_ENEMY 	30
# define MAX_OBJECT 40
# define FRAMERATE  60
#endif
