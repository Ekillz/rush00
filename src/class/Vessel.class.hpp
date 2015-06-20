/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vessel.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emammadz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 16:26:23 by emammadz          #+#    #+#             */
/*   Updated: 2015/06/20 16:50:27 by emammadz         ###   ########.fr       */
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

	protected:
		int _chp;
		int _mhp;
		int _x;
		int _y;
		
};

#endif
