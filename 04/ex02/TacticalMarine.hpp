/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 11:42:49 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/25 16:34:28 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"
#include <iostream>


class TacticalMarine : public ISpaceMarine {
	
	public:
		TacticalMarine();
		TacticalMarine(const TacticalMarine &t);
		TacticalMarine& operator=(const TacticalMarine &t);
		~TacticalMarine();

		ISpaceMarine* clone() const;
		void battleCry() const;
		void rangedAttack() const;
		void meleeAttack() const;

};

#endif