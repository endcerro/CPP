/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 17:19:14 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/25 15:56:26 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef SORCERER_HPP
#define SORCERER_HPP

#include "Victim.hpp"
#include "Peon.hpp"

//COPILEN OK

class Sorcerer
{
	public:
		Sorcerer(std::string name, std::string title);
		Sorcerer(const Sorcerer &s);
		Sorcerer& operator=(const Sorcerer &s);
		~Sorcerer();
		const std::string getName() const;
		const std::string getTitle() const;
		void polymorph(const Victim &v) const;
		void polymorph(const Peon &v) const;
	
	private :
		std::string _name;
		std::string _title;
};
std::ostream& operator<< (std::ostream& os, const Sorcerer &s);
#endif