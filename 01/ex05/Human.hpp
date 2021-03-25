/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 17:08:04 by edal--ce          #+#    #+#             */
/*   Updated: 2021/03/25 16:52:16 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
#define HUMAN_H
#include "Brain.hpp"

class Human {
public:

	Human();
	~Human();
	const std::string identify(void) const;
	const Brain &getBrain(void) const;

	private : 
	const Brain _brain;

	
};
#endif