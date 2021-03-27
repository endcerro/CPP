/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 17:45:54 by edal              #+#    #+#             */
/*   Updated: 2021/03/27 16:35:29 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CONTACT_H
#define CONTACT_H

#include <string>
#include <iostream>
#include "contact.hpp"

#define FIELDS_NB 11

class Contact
{
	public:
		
		Contact(void);
		Contact(std::string a,std::string b,std::string c,std::string d);
		~Contact(void);
		Contact(Contact &a);
		void Print(void) const;
		void Setup(void);
		std::string GetField(int index) const;
		std::string GetLabel(int index) const;

	private:
		std::string _fields[FIELDS_NB];
		static std::string _labels[FIELDS_NB];
};


#endif