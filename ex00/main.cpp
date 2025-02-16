/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 11:06:13 by bsunda            #+#    #+#             */
/*   Updated: 2025/02/16 11:37:56 by bsunda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(int ac, char **av){
	(void) ac;
	(void) av;
	ClapTrap unknown;
	ClapTrap *john = new ClapTrap("john doe");

	unknown.attack("enemy");
	john->beRepaired(2);
	john->takeDamage(5);
	john->attack("enemy");
	john->attack("enemy");
	john->takeDamage(3);
	john->beRepaired(100);
	john->attack("enemy");
	john->attack("enemy");
	john->attack("enemy");
	john->attack("enemy");
	john->attack("enemy");
	john->attack("enemy");
	john->attack("enemy");
	john->attack("enemy");
	unknown.takeDamage(100);
	unknown.takeDamage(100);

	delete john;
}