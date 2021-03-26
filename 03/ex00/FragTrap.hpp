/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 13:01:11 by edal--ce          #+#    #+#             */
/*   Updated: 2021/03/26 15:35:37 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H
#include <iostream>

class FragTrap
{
	public:	
		FragTrap(std::string name);
		~FragTrap();
		void rangedAttack(std::string const & target) const;
		void meleeAttack(std::string const & target) const;
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void vaulthunter_dot_exe(std::string const & target);
	private :
		unsigned int _hp;
		unsigned int _max_hp;
		unsigned int _ep;
		unsigned int _max_ep;
		unsigned int _lvl;
		std::string _name;
		unsigned int _cqc_d;
		unsigned int _rng_d;
		unsigned int _armr;
};

#endif