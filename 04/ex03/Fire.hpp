/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fire.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 17:05:08 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/25 17:06:20 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIRE_HPP
#define FIRE_HPP 


#include "AMateria.hpp"

class Fire : public AMateria {

	public:
		Fire();
		
		Fire(const Fire &c);
		Fire& operator=(const Fire &c);

		~Fire();
		void use(ICharacter &t);
		AMateria* clone() const;
};

#endif