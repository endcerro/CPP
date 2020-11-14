#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <string>
#include <iostream>
#include "contact.hpp"
#include "book.hpp"

#define STORAGE 8

class Book
{
	public:
		Book(void);
		~Book(void);
		void AddContact(Contact c);
		void PrintBook(void) const;
		void List(void) const;

	private:
		int ammount = 0;
		Contact db[STORAGE];
}; // class Database


#endif