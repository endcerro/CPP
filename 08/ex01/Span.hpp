/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal <edal@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 16:17:22 by edal              #+#    #+#             */
/*   Updated: 2021/04/17 17:51:49 by edal             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <exception>

class Span {
public:

		Span(const unsigned int &s);
		~Span();
		void addNumber(int n);
		int longestSpan(void) const;
		int shortestSpan(void) const;
		class MaxCapacity : public std::exception
		{
			public :
			MaxCapacity() throw();
			virtual const char* what() const throw();
		};
		class NoMembers : public std::exception
		{
			public :
			NoMembers() throw();
			virtual const char* what() const throw();
		};
	private :
		int 				*_arr;
		unsigned int 		_s;
		const unsigned int 	_c;
};

#endif