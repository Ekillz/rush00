/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vessel.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emammadz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 16:26:23 by emammadz          #+#    #+#             */
/*   Updated: 2015/06/20 18:15:46 by emammadz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VESSEL_CLASS_HPP
#define VESSEL_CLASS_HPP

#include "IEntity.class.hpp"

class Vessel : public IEntity
{
	public:
		Vessel(void);
		Vessel(Vessel const & src);
		Vessel & operator=(Vessel const & src);
		~Vessel(void);

		void collideAction();

		int getDmg() const;
		int getArmor() const;
		int getAmmo() const;
		int getX() const;
		int getY() const;
		int getChp() const;
		int getMhp() const;

		void setDmg(int amount);
		void setArmor(int amount);
		void setAmmo(int amount);
		void setX(int amount);
		void setY(int amount);
		void setChp(int amount);
		void setMhp(int amount);

	protected:
		int _chp;
		int _mhp;
		int _x;
		int _y;
		int _dmg;
		int _armor;
		int _ammo;

};

#endif
