/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal <edal@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 17:11:09 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/19 17:13:03 by edal             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef WEAPON_H
#define WEAPON_H
#include <string>
#include <sstream>

class Weapon {

public:
	Weapon();
	Weapon(std::string type);
	~Weapon();
	const std::string *getType(void) const;
	void setType(std::string type);
	
private	 :
	std::string _type;
};

#endif