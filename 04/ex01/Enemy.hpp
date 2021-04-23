/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 13:11:08 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/23 16:22:22 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
#define ENEMY_HPP
#include <iostream>

class Enemy 
{
	public:
		Enemy(int hp, std::string const &type);
		Enemy(const Enemy &e);
		Enemy& operator=(const Enemy &e);
		virtual ~Enemy();
		const std::string &getType() const;
		int getHP() const;
		virtual void takeDamage(int a);
	protected :
		int _hp;
		std::string _type;
};

#endif