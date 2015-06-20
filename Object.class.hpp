/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Object.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emammadz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 18:20:21 by emammadz          #+#    #+#             */
/*   Updated: 2015/06/20 18:32:28 by emammadz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OBJECT_CLASS_HPP
#define OBJECT_CLASS_HPP

#include "IEntity.class.hpp"

class Object : public IEntity
{
	public:
		Object(void);
		Object(int x, int y, int dmg);
		Object(Object const & src);
		Object & operator=(Object const & src);
		~Object(void);

		void collideAction();

		int getX() const;
		int getY() const;
		int getDmg() const;

		void setX(int amount);
		void setY(int amount);
		void setDmg(int amount);

	protected:
		int _x;
		int _y;
		int _dmg;
};

#endif
