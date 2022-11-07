/* **************************************************************************************** */
/*                                                                                          */
/*                                                        :::::::::: :::::::::   :::::::    */
/* main.cpp                                              :+:        :+:    :+: :+:    :+    */
/*                                                      +:+        +:+    +:+ +:+           */
/* By: Flavio BC <github.com/GitFlaviobc>             :#::+::#   +#++:++#+  +#+             */
/*                                                   +#+        +#+    +#+ +#+              */
/* Created: 2022/09/18 10:54:12 by Flavio BC        #+#        #+#    #+# #+#    #+#        */
/* Updated: 2022/10/24 14:56:35 by Flavio BC       ###        #########   ########          */
/* License: MIT                                                                             */
/*                                                                                          */
/* **************************************************************************************** */

#include "ScavTrap.hpp"

int	main(void) {
	{
		std::cout << "[ Calling Tests ]\n";
		std::cout << "\t[  ]\n";
		std::cout << "\t[ Clap ]\n";
		ClapTrap	TheTrap;
		std::cout << "\t[ A ]\n";
		ScavTrap	a("Marvin");
		std::cout << "\t[ B ]\n";
		ScavTrap	b;
		std::cout << "\t[ C ]\n";
		ClapTrap	c;
		std::cout << "\t[  ]\n";
		std::cout << "\t[ Clap ]\n";
		std::cout << TheTrap << std::endl;
		std::cout << "\t[ A ]\n";
		std::cout << a << std::endl;
		std::cout << "\t[ B ]\n";
		std::cout << b << std::endl;
		std::cout << "\t[ C ]\n";
		std::cout << c << std::endl;
		std::cout << "[  ]\n";
		b = a;
		c = a;
		b.setName(b.getName() + "_B_copy");
		c.setName(c.getName() + "_C_copy");
		std::cout << "\t[ B ]\n";
		std::cout << b << std::endl;
		std::cout << "\t[ C ]\n";
		std::cout << c << std::endl;
		std::cout << "[DESTRUCTORS]\n";
	}
		std::cout << "[END SCOPE]\n";
		std::cout << "[NEW SCOPE]\n";
	{
		std::cout << "[ Combat Tests ]\n";
		std::cout << "\t[  ]\n";
		ClapTrap	a("Minishell");
		ScavTrap	b("Cadet");
		int			O2 = 2;
		std::cout << "\t[COMBAT]\n";
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
		std::cout << "\t[  ]\n";
		a.attack(b.getName());
		b.takeDamage(a.getAttackdamage());
		a.attack(b.getName());
		b.takeDamage(a.getAttackdamage());
		a.attack(b.getName());
		b.takeDamage(a.getAttackdamage());
		std::cout << "\t[  ]\n";
		b.guardGate();
		b.beRepaired(O2);
		b.beRepaired(O2);
		b.guardGate();
		std::cout << "\t[DESTRUCTORS]\n";
	}
	std::cout << "\t[ENDSCOPE]\n";
	std::cout << "\t[END]\n";
	return (0);
}
