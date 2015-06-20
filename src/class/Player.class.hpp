/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emammadz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 16:50:38 by emammadz          #+#    #+#             */
/*   Updated: 2015/06/20 18:14:52 by emammadz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAYER_CLASS_HPP
#define PLAYER_CLASS_HPP

#include "Vessel.class.hpp"

class Player : public Vessel
{
	public:
		Player(void);
		Player(Player const & src);
		Player & operator=(Player const & src);
		~Player(void);

		int getScore() const;
		
		void setScore(int amount);
		
		void collideAction();
		void shoot();
	private:
		int _score;
};

#endif
