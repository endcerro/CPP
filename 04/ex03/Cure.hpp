/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 13:26:46 by edal--ce          #+#    #+#             */
/*   Updated: 2021/03/30 18:19:24 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {

	public:
		Cure();
		Cure(const Cure &c);
		Cure& operator=(const Cure &c);
		virtual ~Cure();
		void use(ICharacter &t);
		AMateria* clone() const;
};

#endif
