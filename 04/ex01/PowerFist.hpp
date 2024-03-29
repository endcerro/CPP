/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 12:21:40 by edal--ce          #+#    #+#             */
/*   Updated: 2021/04/25 15:58:37 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist : public AWeapon {
	
	public:
		PowerFist();
		PowerFist(const PowerFist &p);
		// PowerFist& operator= (const PowerFist &h);
		~PowerFist();
		void attack() const;
};
#endif