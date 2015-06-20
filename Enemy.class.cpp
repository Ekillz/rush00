/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emammadz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 16:55:38 by emammadz          #+#    #+#             */
/*   Updated: 2015/06/20 18:40:02 by emammadz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.class.hpp"

Enemy::Enemy(void) : Vessel()
{
	this->_x = 1;
	this->_y = 1;
	this->_chp = 1;
	this->_mhp = 1;
	this->_dmg = 1;
	this->_armor = 0;
	this->_ammo = 20;
}

Enemy & Enemy::operator=(Enemy const & src)
{
	this->_x = src.getX();
	this->_y = src.getY();
	this->_chp = src.getChp();
	this->_mhp = src.getMhp();
	this->_dmg = src.getDmg();
	this->_armor = src.getArmor();
	this->_ammo = src.getAmmo();

	return (*this);
}

Enemy::Enemy(Enemy const & src)
{
	*this = src;
}

Enemy::~Enemy(void)
{
	std::cout << "Enemy dead" << std::endl;
	return;
}

void Enemy::collideAction()
{
	std::cout << "enemy: new collide action" << std::endl;
}

void Enemy::shoot()
{
	std::cout << "enemy shooted" << std::endl;
}
