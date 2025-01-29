/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 11:27:04 by bsunda            #+#    #+#             */
/*   Updated: 2025/01/29 12:47:57 by bsunda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap() {
	this->_health_hit = 100;
	this->_energy = 50;
	this->_attack_damage = 20;
	std::cout << "ScavTrav Constructor default called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name): ClapTrap() {
	this->_name = name;
	this->_health_hit = 100;
	this->_energy = 50;
	this->_attack_damage = 20;
	std::cout << "ScavTrap Constructor with name called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const & src): ClapTrap(src){
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = src;
	return ; 
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap Destructor called" << std::endl;
	return ;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs){
		this->_name = rhs._name;
		this->_attack_damage = rhs._attack_damage;
		this->_energy = rhs._energy;
		this->_health_hit = rhs._health_hit;
	}
	return *this;
}


void ScavTrap::attack(const std::string& target){
	if (this->_energy < 1){
		std::cout << "ScavTrap " << this->_name << " doesn't have enough energy" << std::endl;
		return ;
	}
	if (this->_health_hit < 1){
		std::cout << "ScavTrap " << this->_name << " doesn't have enough health" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
	this->_energy--;
	return ;
}



void	ScavTrap::guardGate(){
	if (this->_health_hit < 1){
		std::cout << "ScavTrap " << this->_name << " can't guard, he has no more hit points" << std::endl;
		return ;
	}
	if (this->_energy < 1){
		std::cout << "ScavTrap " << this->_name << " can't guard, he has no more energy" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_name << " is in Gate keeper mode" << std::endl;
	this->_energy--;
}
