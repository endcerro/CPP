/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 17:47:52 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/23 15:57:51 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::~AWeapon()
{}

AWeapon::AWeapon(const AWeapon &a) :_name(a._name), _dmg(a._dmg), _cost(a._cost)
{}

AWeapon& AWeapon::operator=(const AWeapon &a)
{
	this->_cost = a._cost;
	this->_dmg = a._dmg;
	this->_name = a._name;
	return *this;
}

AWeapon::AWeapon(const std::string &n, int a, int d) : _name(n), _dmg(d), _cost(a)
{}

int AWeapon::getDamage(void) const
{
	return this->_dmg;
}

int AWeapon::getAPCost(void) const
{
	return this->_cost;
}
const std::string& AWeapon::getName() const
{
	return this->_name;
}