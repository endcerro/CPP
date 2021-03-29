/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 17:07:57 by edal--ce          #+#    #+#             */
/*   Updated: 2021/03/29 11:39:50 by edal--ce         ###   ########.fr       */
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
			
		Zombie(const Zombie &f);
		Zombie& operator= (const Zombie &f);

		void announce(void) const;
		void setType(std::string type);
		void setName(std::string type);
	private :
		std::string _name;
		std::string _type;
};

#endif