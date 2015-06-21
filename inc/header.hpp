/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaueur <chaueur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 18:43:21 by chaueur           #+#    #+#             */
/*   Updated: 2015/06/21 16:00:35 by chaueur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_HPP

# define HEADER_HPP

#include <ncurses.h>
#include <unistd.h>
#include <stdlib.h>

#include "../src/class/IEntity.class.hpp"
#include "../src/class/Vessel.class.hpp"
#include "../src/class/Player.class.hpp"
#include "../src/class/Enemy.class.hpp"
#include "../src/class/Object.class.hpp"
#include "data.hpp"
#include "screen.hpp"
#include "actions.hpp"

namespace col
{
	int  checkCol(Player * a, Enemy b[MAX_ENEMY], Object c[MAX_OBJECT]);
	void updatePos(Enemy b[MAX_ENEMY], Object c[MAX_OBJECT]);
	void createEnemy(Enemy b[MAX_ENEMY], int x, int y);
	void createObject(Object c[MAX_OBJECT], int x, int y, std::string type);
	void checkPos(Enemy b[MAX_ENEMY], Object c[MAX_OBJECT]);
	void updateEshot( Object *eShot );
}

#endif
