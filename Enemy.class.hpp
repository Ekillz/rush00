/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emammadz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 18:01:58 by emammadz          #+#    #+#             */
/*   Updated: 2015/06/20 18:15:31 by emammadz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_CLASS_HPP
#define ENEMY_CLASS_HPP

#include "Vessel.class.hpp"

class Enemy : public Vessel
{
	public:
		Enemy(void);
		Enemy(Enemy const & src);
		Enemy & operator=(Enemy const & src);
		~Enemy(void);

		void collideAction();
		void shoot();
};

#endif
