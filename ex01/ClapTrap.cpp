/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 11:06:06 by bsunda            #+#    #+#             */
/*   Updated: 2025/01/28 11:54:26 by bsunda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap(void) {
	std::cout << "Constructor default called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name): _name(name){
	std::cout << "Constructor with name called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const & src){
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ; 
}

ClapTrap::~ClapTrap(){
	std::cout << "Destructor called" << std::endl;
	return ;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs){
		this->_name = rhs._name;
	}
	return *this;
}


void attack(const std::string& target){
	
}

void takeDamage(unsigned int amount){
	
}

void beRepaired(unsigned int amount){
	
}


