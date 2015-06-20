/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emammadz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 16:55:38 by emammadz          #+#    #+#             */
/*   Updated: 2015/06/20 17:22:13 by emammadz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Player.class.hpp"

Player::Player(void) : Vessel()
{
	this->_x = 1;
	this->_y = 1;
	this->_chp = 1;
	this->_mhp = 1;
	this->_score = 0;
	this->_dmg = 1;
	this->_armor = 0;
	this->_ammo = 20;
}

Player & Player::operator=(Player const & src)
{
	this->_x = src.getX();
	this->_y = src.getY();
	this->_chp = src.getChp();
	this->_mhp = src.getMhp();
	this->_score = src.getScore();
	this->_dmg = src.getDmg();
	this->_armor = src.getArmor();
	this->_ammo = src.getAmmo();

	return (*this);
}

Player::Player(Player const & src)
{
	*this = src;
}

Player::~Player(void)
{
	std::cout << "Player dead" << std::endl;
	return;
}

void Player::collideAction()
{
	std::cout << "new collide action" << std::endl;
}

void Player::shoot()
{
	std::cout << "player shooted" << std::endl;
}

int Player::getScore() const { return this->_score; }
int Player::getDmg() const{ return this->_dmg; }
int Player::getArmor() const { return this->_armor; }
int Player::getAmmo() const { return this->_ammo; }
int Player::getX() const { return this->_x; }
int Player::getY() const { return this->_y; }
int Player::getChp() const { return this->_chp; }
int Player::getMhp() const { return this->_mhp; }

void Player::setScore(int amount) { this->_score = amount;}
void Player::setDmg(int amount) { this->_dmg = amount;}
void Player::setArmor(int amount) { this->_armor = amount;}
void Player::setAmmo(int amount) { this->_ammo = amount;}
void Player::setX(int amount) { this->_x = amount;}
void Player::setY(int amount) { this->_y = amount;}
void Player::setChp(int amount) { this->_chp = amount;}
void Player::setMhp(int amount) { this->_mhp = amount;}
