/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* main.cpp                                              :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/18 10:54:12 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/23 07:59:16 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include "ClapTrap.hpp"

int	main(void) {
	{
		std::cout << "[ Calling Tests ]\n";
		std::cout << "\t[CONSTRUCTORS]\n";
		ClapTrap	TheTrap;
		ClapTrap	a("Marvin");
		ClapTrap	b("Moulli");
		ClapTrap	fake(TheTrap);
		ClapTrap	fake2;

		fake2 = a;
		std::cout << "\n\t[SET GET]\n";
		fake.setName(fake.getName() + "_fake");
		fake2.setName(fake2.getName() + "_fake2");
		std::cout << TheTrap <<"\n\n";
		std::cout << a <<"\n\n";
		std::cout << b <<"\n\n";
		std::cout << fake <<"\n\n";
		std::cout << fake2 <<"\n\n";
		std::cout << "\n\t[DESTRUCTORS]\n";
	}
		std::cout << "[END]\n";
		std::cout << "\n[NEW SCOPE]\n";
	{
		std::cout << "[ Combat Tests ]\n";
		std::cout << "\n\t[CONSTRUCTOR]\n";
		ClapTrap	a("Minishell");
		ClapTrap	b("Cadet");
		int			O2 = 2;
		std::cout << "\n\t[COMBAT]\n";
		a.setAttackdamage(200);
		b.setAttackdamage(1);
		b.beRepaired(O2);
		b.beRepaired(O2);
		b.beRepaired(O2);
		b.beRepaired(O2);
		b.beRepaired(O2);
		b.beRepaired(O2);
		b.beRepaired(O2);
		b.beRepaired(O2);
		b.beRepaired(O2);
		b.beRepaired(O2);
		b.beRepaired(O2);
		b.beRepaired(O2);
		std::cout << "\n\t[COMBAT]\n";
		a.attack(b.getName());
		b.takeDamage(a.getAttackdamage());
		a.attack(b.getName());
		b.takeDamage(a.getAttackdamage());
		a.attack(b.getName());
		b.takeDamage(a.getAttackdamage());
		std::cout << "\n\t[NO ENERGY]\n";
		b.beRepaired(O2);
		b.beRepaired(O2);
		std::cout << "\n\t[DESTRUCTORS]\n";
	}
	std::cout << "\n\t[END]\n";
	std::cout << "\n\t[END TESTS]\n";
	return (0);
}
