/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 12:40:05 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/25 16:45:51 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
//Copilen OK
class ICharacter;
#include "ICharacter.hpp"

class AMateria {
		
	public:
		
		AMateria(std::string const & type);
		AMateria(const AMateria &c);
		AMateria& operator=(const AMateria &m);

		virtual ~AMateria();
		std::string const & getType() const;
		unsigned int getXP() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
		
	protected:
		unsigned int _xp;
		std::string _type;
};
#endif