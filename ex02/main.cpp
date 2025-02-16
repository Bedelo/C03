/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 11:29:20 by bsunda            #+#    #+#             */
/*   Updated: 2025/02/03 11:11:20 by bsunda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ScavTrap.hpp"
#include "./FragTrap.hpp"

int main (int ac, char ** av){
	(void) ac;
	(void) av;

	ScavTrap john("john doe");
	john.guardGate();
	john.attack("enemy");
	john.beRepaired(3);
	john.guardGate();
}