/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal <edal@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 17:08:04 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/19 17:11:16 by edal             ###   ########.fr       */
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
	Brain _brain;

	
};
#endif