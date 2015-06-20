/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nsFunctions.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emammadz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 20:59:56 by emammadz          #+#    #+#             */
/*   Updated: 2015/06/20 22:10:49 by emammadz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int col::checkCol(Player * a, Enemy b[MAX_ENEMY], Object c[MAX_OBJECT])
{
	a->setX(28);
	int i = 0;
	while (i < MAX_ENEMY)
	{
		if (((a->getX() == b[i].getX())  && (a->getY() == b[i].getY())) ||
				((a->getX() + 1 == b[i].getX())  && (a->getY() == b[i].getY())))
			return (1);
		i++;
	}
	i = 0;
	while (i < MAX_OBJECT)
	{
		if (((a->getX() == c[i].getX())  && (a->getY() == c[i].getY())) ||
				((a->getX() - 1 == c[i].getX())  && (a->getY() == c[i].getY())) ||
				((a->getX() + 1 == c[i].getX())  && (a->getY() == c[i].getY())))
			return (2);
		i++;
	}
	return (0);
}

void col::updatePos(Enemy b[MAX_ENEMY], Object c[MAX_OBJECT])
{

	// fShot = user shot, eShot = Enemy shot, obstacle = obstacle lool //
	int i = 0;
	while (i < MAX_ENEMY)
	{
		// if (!cyril::maxPos + 5)
			b[i] += 1;
		i++;
	}
	i = 0;
	while (i < MAX_ENEMY)
	{
		// if (!cyril::maxPos + 5)
			if (c[i].getType() == "obstacle" || c[i].getType() == "eShot")
				c[i] += 1;
			else if (c[i].getType() == "fShot")
				c[i] -= 1;
		i++;
	}
}
