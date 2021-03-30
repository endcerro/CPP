/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 13:26:46 by edal--ce          #+#    #+#             */
/*   Updated: 2021/03/30 18:21:32 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {

	public:
		Ice();
		Ice(const Ice &c);
		Ice& operator=(const Ice &c);
		~Ice();
		void use(ICharacter &t);
		Ice* clone() const;
};

#endif
