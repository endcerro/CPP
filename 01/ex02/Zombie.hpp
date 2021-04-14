/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal <edal@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 16:24:25 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/14 20:55:44 by edal             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include <iostream>

class Zombie
{
	public :
		Zombie(void);
		//COPILEN STUFF
		Zombie(const Zombie &f);
		Zombie& operator= (const Zombie &f);
		
		Zombie(std::string name);
		Zombie(std::string name, std::string type);
		~Zombie(void);
		void announce(void) const;
		void setType(std::string type);
		
	private :
		std::string _name;
		std::string _type;
};

#endif