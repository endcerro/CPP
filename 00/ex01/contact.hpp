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
		~Contact(void);
		void Print(void) const;
		void Setup(void);
		std::string GetField(int index) const;
		std::string GetLabel(int index) const;

	private:
		std::string _fields[FIELDS_NB];
		static std::string _labels[FIELDS_NB];
};


#endif