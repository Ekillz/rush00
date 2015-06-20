/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IEntity.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaueur <chaueur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 16:27:21 by emammadz          #+#    #+#             */
/*   Updated: 2015/06/20 19:02:32 by chaueur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef IENTITY_CLASS_HPP
#define IENTITY_CLASS_HPP

#include <iostream>
#include <cstdlib>

class IEntity
{
	virtual void collideAction() = 0;
};

#endif
