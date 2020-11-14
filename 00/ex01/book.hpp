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
		int _ammount = 0;
		Contact _db[STORAGE];
};


#endif