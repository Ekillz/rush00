/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emammadz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 18:29:07 by emammadz          #+#    #+#             */
/*   Updated: 2015/06/20 18:32:23 by emammadz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Player.class.hpp"
#include "Enemy.class.hpp"
#include "Object.class.hpp"

int main(void)
{
	Player a;
	Enemy  b;
	Object c;

	a.collideAction();
	b.collideAction();
	c.collideAction();
	return (0);
}
