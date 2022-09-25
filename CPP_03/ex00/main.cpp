/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* main.cpp                                              :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/18 10:54:12 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/09/25 12:50:47 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include "ClapTrap.hpp"

int	main(void) {
	{
		std::cout << "---------- Calling Tests ----------\n";
		std::cout << "\t--------  --------\n";
		ClapTrap	TheTrap;
		ClapTrap	a("Marvin");
		ClapTrap	b("Moulli");
		ClapTrap	fake(TheTrap);
		ClapTrap	fake2;

		fake2 = a;
		fake.setName(fake.getName() + "_fake");
		fake2.setName(fake2.getName() + "_fake");
		std::cout << TheTrap << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << fake << std::endl;
		std::cout << fake2 << std::endl;
		std::cout << "----------  ----------\n";
	}
		std::cout << "----------  ----------\n";
		std::cout << "----------  ----------\n";
	{
		std::cout << "---------- Combat Tests ----------\n";
		std::cout << "\t--------  --------\n";
		ClapTrap	a("Minishell");
		ClapTrap	b("Cadet");
		int			O2 = 2;
		std::cout << "\t--------  --------\n";
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
		std::cout << "\t--------  --------\n";
		a.attack(b.getName());
		b.takeDamage(a.getAttackdamage());
		a.attack(b.getName());
		b.takeDamage(a.getAttackdamage());
		a.attack(b.getName());
		b.takeDamage(a.getAttackdamage());
		std::cout << "\t--------  --------\n";
		b.beRepaired(O2);
		b.beRepaired(O2);
		std::cout << "\t--------  --------\n";
	}
	std::cout << "\t--------  --------\n";
	std::cout << "\t--------  --------\n";
	return (0);
}
