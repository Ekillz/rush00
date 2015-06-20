/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Object.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emammadz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 18:23:50 by emammadz          #+#    #+#             */
/*   Updated: 2015/06/20 19:31:52 by emammadz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Object.class.hpp"

Object::Object(void) : _x(1), _y(1), _dmg(1)
{
	return;
}

Object::Object(int x, int y) : _x(x), _y(y)
{
	this->_dmg = 1;
	std::cout << "object x: " << x << "  y: " << y << std::endl;
	return ;
}	

Object & Object::operator=(Object const & src)
{
	this->_x = src.getX();
	this->_y = src.getY();
	this->_dmg = src.getDmg();
	return (*this);
}

Object::Object(Object const & src)
{
	*this = src;
	return ;
}

Object::~Object(void)
{
	std::cout << "object destructed" << std::endl;
	return ;
}

void Object::collideAction(void)
{
	std::cout << "object collided" << std::endl;
}

int Object::getX() const { return this->_x; }
int Object::getY() const { return this->_y; }
int Object::getDmg() const{ return this->_dmg; }

void Object::setX(int amount) { this->_x = amount;}
void Object::setY(int amount) { this->_y = amount;}
void Object::setDmg(int amount) { this->_dmg = amount;}
