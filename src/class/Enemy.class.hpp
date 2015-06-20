/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaueur <chaueur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 18:01:58 by emammadz          #+#    #+#             */
/*   Updated: 2015/06/20 22:17:38 by emammadz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_CLASS_HPP
#define ENEMY_CLASS_HPP

#include "Vessel.class.hpp"

class Enemy : public Vessel
{
	public:
		Enemy(void);
		Enemy(int x, int y);
		Enemy(Enemy const & src);
		Enemy & operator=(Enemy const & src);
		~Enemy(void);

		Enemy & operator+=(int amount);
		Enemy & operator-=(int amount);

		void collideAction();
		void shoot();
		void genMov();
};

#endif
