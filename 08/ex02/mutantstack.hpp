/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal <edal@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 14:35:01 by edal--ce          #+#    #+#             */
/*   Updated: 2021/05/05 15:42:32 by edal             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP


#include <stack>


template<typename T>
class MutantStack : public std::stack<T>
{
	public:

		MutantStack() : std::stack<T>() {};
		~MutantStack() {} ;

		MutantStack(const MutantStack& copy) : std::stack<T>(copy) {};
		MutantStack<T>& operator=(const MutantStack<T>& m)
		{
			std::stack<T>::operator=(m);
			return (*this);
		};
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin()
		{ 
			return (std::stack<T>::c.begin()); 
		}
		iterator end() 
		{ 
			return (std::stack<T>::c.end()); 
		}
};

#endif