/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emammadz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 16:50:38 by emammadz          #+#    #+#             */
/*   Updated: 2015/06/20 17:22:18 by emammadz         ###   ########.fr       */
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
		int getDmg() const;
		int getArmor() const;
		int getAmmo() const;
		int getX() const;
		int getY() const;
		int getChp() const;
		int getMhp() const;
		
		void setScore(int amount);
		void setDmg(int amount);
		void setArmor(int amount);
		void setAmmo(int amount);
		void setX(int amount);
		void setY(int amount);
		void setChp(int amount);
		void setMhp(int amount);
		
		void collideAction();
		void shoot();
	private:
		int _score;
		int _dmg;
		int _armor;
		int _ammo;
};

#endif
