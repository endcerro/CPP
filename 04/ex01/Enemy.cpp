/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 13:11:05 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/23 16:22:40 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type) : _hp(hp), _type(type){}

Enemy::Enemy(const Enemy &e) : _hp(e._hp), _type(e._type)
{}

Enemy::~Enemy() {}

Enemy& Enemy::operator=(const Enemy &e)
{
	_hp = e._hp;
	_type = e._type;
	return *this;
}

const std::string &Enemy::getType(void) const
{
	return _type;
}

int Enemy::getHP() const
{
	return this->_hp;
}

void Enemy::takeDamage(int d)
{
	if (d > 0)
		_hp = (d >= _hp) ? 0 : (_hp - d);
	// if (_hp <= 0)
	// 	delete this;
}