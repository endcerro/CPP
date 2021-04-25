/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 11:29:08 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/25 16:23:15 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
#define SQUAD_HPP 

#include "ISquad.hpp"

class Squad : public ISquad {
	
	public :
		Squad();
		Squad(const Squad &c);
		Squad& operator=(const Squad &c);
		~Squad();
		int getCount(void) const;
		ISpaceMarine* getUnit(int t) const;
		int push(ISpaceMarine* m);
	private :
		void emptySquad(void);
		int 			_c;
		ISpaceMarine 	**_s;

		
};

#endif