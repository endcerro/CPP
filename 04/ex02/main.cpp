/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 11:21:54 by edal--ce          #+#    #+#             */
/*   Updated: 2021/03/30 12:37:32 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
int main()
{
	// ISpaceMarine* bob = new TacticalMarine;
	// ISpaceMarine* jim = new AssaultTerminator;
	// ISquad* vlc = new Squad;
	// vlc->push(bob);
	// vlc->push(jim);
	Squad tst;// = new Squad(*vlc);
	tst.push(new TacticalMarine);
	tst.push(new TacticalMarine);
	tst.push(new AssaultTerminator);
	

	Squad backup(tst);
	Squad third = tst;
	// backup.push(new TacticalMarine);
	// delete tst;
	// for (int i = 0; i < backup.getCount(); ++i)
	// {
	// 	ISpaceMarine* cur = backup.getUnit(i);
	// 	cur->battleCry();
	// 	cur->rangedAttack();
	// 	cur->meleeAttack();
	// }
	// delete vlc;
	return 0;
}