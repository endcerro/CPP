/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 17:39:31 by edal--ce          #+#    #+#             */
/*   Updated: 2021/03/30 17:46:03 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource
{
	public :
		MateriaSource() {}
		~MateriaSource() {}
		void learnMateria(AMateria*) = 0;
		AMateria* createMateria(std::string const & type);

	private : 
		std::string _mem[4];
};

#endif
