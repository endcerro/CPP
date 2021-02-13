/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 16:24:25 by edal--ce          #+#    #+#             */
/*   Updated: 2021/02/13 17:07:52 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include <iostream>

class Zombie
{
	public :
		Zombie(std::string name);
		Zombie(std::string name, std::string type);
		Zombie(void);
		~Zombie(void);
		void announce(void) const;
		void setType(std::string type);
	private :
		std::string _name;
		std::string _type;
};

#endif