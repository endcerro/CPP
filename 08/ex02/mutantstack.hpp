/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 14:35:01 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/30 14:55:23 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP


#include <stack>


template<typename T>
class MutantStack : public std::stack<T>
{
	public:

		MutantStack();
		~MutantStack();


		// MutantStack(const MutantStack& copy) : std::stack<T>(copy) {};
		// MutantStack<T>& operator=(const MutantStack<T>& assign)
		// 		{std::stack<T>::operator=(assign);return (*this);};

		// For creating in the main an iterator object and for the return value of begin / end methods
		// typedef typename std::stack<T>::container_type::iterator iterator;

		// Begin and end methods that returns an iterator of the underlying container object
		// that stack is using (could be deque, vector or list. Is a deque by default).
		// Std::stack<T>::c is a member object of stack container that is the the underlying container.
		// iterator begin() { return (std::stack<T>::c.begin()); }
		// iterator end() { return (std::stack<T>::c.end()); }
};

#endif