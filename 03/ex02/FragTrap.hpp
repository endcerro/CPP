/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 15:56:17 by edal--ce          #+#    #+#             */
/*   Updated: 2021/03/26 15:56:21 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:	
		FragTrap(std::string name);
		~FragTrap();
		void vaulthunter_dot_exe(std::string const & target);
};

#endif