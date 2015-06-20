/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IEntity.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emammadz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 16:27:21 by emammadz          #+#    #+#             */
/*   Updated: 2015/06/20 22:21:39 by emammadz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IENTITY_CLASS_HPP
#define IENTITY_CLASS_HPP

#include <iostream>
#include <cstdlib>

#define MAX_ENEMY 5
#define MAX_OBJECT 10

class IEntity
{
	virtual void collideAction() = 0;
};

#endif
