/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 17:15:12 by edal--ce          #+#    #+#             */
/*   Updated: 2021/03/26 17:31:52 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef VICTIM_HPP
#define VICTIM_HPP 

#include <iostream>


class Victim
{
	public:
		Victim(std::string name);
		~Victim();
		const std::string getName() const;
		void getPolymorphed() const;

	private :
		std::string _name;
};
std::ostream& operator<< (std::ostream& os, const Victim &f);
#endif