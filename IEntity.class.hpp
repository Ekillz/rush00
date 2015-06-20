/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IEntity.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emammadz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 16:27:21 by emammadz          #+#    #+#             */
/*   Updated: 2015/06/20 18:41:49 by emammadz         ###   ########.fr       */
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
