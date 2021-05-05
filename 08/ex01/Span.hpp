/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 16:17:22 by edal              #+#    #+#             */
/*   Updated: 2021/04/30 13:50:29 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <exception>
#include <vector>
#include <cstdlib>
#include <algorithm>

class Span {
public:

		Span(const unsigned int &s);
		~Span();
		void addNumber(int n);
		int longestSpan(void) const;
		int shortestSpan(void) const;
		void easyFill(unsigned int s);
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
		std::vector<int> 	_v;
		unsigned int 		_s;
		unsigned int 		_ms;
};

#endif
