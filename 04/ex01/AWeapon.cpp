/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 17:47:52 by edal--ce          #+#    #+#             */
/*   Updated: 2021/03/26 17:53:59 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

// AWeapon::AWeapon()
// {}

// AWeapon::~AWeapon()
// {}

AWeapon::AWeapon(std::string const & n, int a, int d) : _name(n), _cost(a), _dmg(d)
{}