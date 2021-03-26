/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 16:01:04 by edal--ce          #+#    #+#             */
/*   Updated: 2021/03/26 16:03:41 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

int main()
{
	NinjaTrap yas("Yasuo");
	FragTrap f("frag");
	ClapTrap c("clap");
	yas.ninjaShoeBox(f);
	yas.ninjaShoeBox(c);
	return 0;
}