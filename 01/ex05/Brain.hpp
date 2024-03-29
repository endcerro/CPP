/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 17:08:02 by edal--ce          #+#    #+#             */
/*   Updated: 2021/03/29 12:02:52 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H
#include <string>
#include <sstream> //for std::stringstream 

class Brain {

public:
	Brain(int iq = 0, int eq = 0);
	Brain(const Brain &b);
	Brain& operator= (const Brain &b);
	
	~Brain();
	std::string identify(void) const;
	int getIq(void) const;
	int getEq(void) const;
	void setIq(int iq);
	void setEq(int eq);

private	 :
	int _iq;
	int _eq;
};

#endif