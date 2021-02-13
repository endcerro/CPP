/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 17:11:09 by edal--ce          #+#    #+#             */
/*   Updated: 2021/02/13 14:17:28 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef WEAPON_H
#define WEAPON_H
#include <string>
#include <sstream> //for std::stringstream 

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