/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 12:40:05 by edal--ce          #+#    #+#             */
/*   Updated: 2021/03/30 18:10:42 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>

class ICharacter;
#include "ICharacter.hpp"

class AMateria {
		
	public:
		AMateria(std::string const & type);
		virtual ~AMateria();
		AMateria(const AMateria &c);
		std::string const & getType() const;
		unsigned int getXP() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
		AMateria& operator=(const AMateria &m);
	protected:
		unsigned int _xp;
		std::string _type;
};
#endif