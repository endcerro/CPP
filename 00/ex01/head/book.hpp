/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   book.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 17:45:54 by edal              #+#    #+#             */
/*   Updated: 2021/03/25 15:31:58 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <string>
#include <iostream>
#include "contact.hpp"
#include "book.hpp"

#define STORAGE 8
#define DISPLAY 10

class Book
{
	public:
		Book(void);
		~Book(void);
		void AddContact(Contact c);
		int List(void) const;
		void PrintContact(int index) const;

	private:
		int _ammount;
		Contact _db[STORAGE];
};


#endif