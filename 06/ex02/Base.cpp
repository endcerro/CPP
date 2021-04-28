/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 17:23:35 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/28 14:22:31 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Base.hpp"

Base::Base() {}

Base::Base(const Base &b) 
{
	(void) b;
}

Base& Base::operator=(const Base &b) 
{
	(void) b;
	return *this;
}

Base::~Base() {}