/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vessel.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaueur <chaueur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 16:37:12 by emammadz          #+#    #+#             */
/*   Updated: 2015/06/20 19:02:27 by chaueur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

Vessel::Vessel(void)
{
	return;
}

Vessel & Vessel::operator=(Vessel const & src)
{
	*this = src;
	return (*this);
}

Vessel::Vessel(Vessel const & src)
{
	*this = src;
	return ;
}

Vessel::~Vessel(void)
{
	return ;
}

void Vessel::collideAction()
{
	std::cout << "collide action" << std::endl;
}
