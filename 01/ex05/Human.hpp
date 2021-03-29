/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 17:08:04 by edal--ce          #+#    #+#             */
/*   Updated: 2021/03/29 11:46:15 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
#define HUMAN_H
#include "Brain.hpp"

class Human {
public:

	Human(void);
	~Human(void);
	Human(const Human &h);
	Human& operator= (const Human &h);
	const std::string identify(void) const;
	const Brain &getBrain(void) const;

	private : 
	const Brain _brain;

	
};
#endif