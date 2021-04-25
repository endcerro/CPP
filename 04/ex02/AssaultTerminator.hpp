/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 11:42:49 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/25 16:37:22 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ASSAULTTERMINATOR_HPP
#define ASSAULTTERMINATOR_HPP

#include "ISpaceMarine.hpp"
#include <iostream>


class AssaultTerminator : public ISpaceMarine {
	
	public:
		AssaultTerminator();
		~AssaultTerminator();
		AssaultTerminator(const AssaultTerminator &t);
		AssaultTerminator& operator=(const AssaultTerminator &t);

		ISpaceMarine* clone() const;
		void battleCry() const;
		void rangedAttack() const;
		void meleeAttack() const;

};

#endif