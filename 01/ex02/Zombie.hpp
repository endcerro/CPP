/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 16:24:25 by edal--ce          #+#    #+#             */
/*   Updated: 2021/03/27 16:54:03 by edal--ce         ###   ########.fr       */
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
		Zombie(const Zombie &f);

		Zombie(std::string name);
		Zombie(std::string name, std::string type);
		~Zombie(void);
		void announce(void) const;
		void setType(std::string type);
		Zombie& operator= (const Zombie &f);
	private :
		std::string _name;
		std::string _type;
};

#endif