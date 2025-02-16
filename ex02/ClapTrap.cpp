/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 11:06:06 by bsunda            #+#    #+#             */
/*   Updated: 2025/02/16 11:38:40 by bsunda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): _name("Unknown"), _health_hit(10), _energy(10), _attack_damage(0) {
	std::cout << "Constructor default called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name): _name(name), _health_hit(10), _energy(10), _attack_damage(10) {
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
		this->_attack_damage = rhs._attack_damage;
		this->_energy = rhs._energy;
		this->_health_hit = rhs._health_hit;
	}
	return *this;
}


void ClapTrap::attack(const std::string& target){
	if (this->_energy < 1){
		std::cout << "ClapTrap " << this->_name << " doesn't have enough energy" << std::endl;
		return ;
	}
	if (this->_health_hit < 1){
		std::cout << "ClapTrap " << this->_name << " doesn't have enough health" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
	this->_energy--;
	return ;
}

void ClapTrap::takeDamage(unsigned int amount){
	if (this->_health_hit < 1){
		std::cout << "hmm, " << this->_name << " has no more health." << std::endl;
		return ;
	}
	if (amount >= static_cast<unsigned int> (this->_health_hit))
		this->_health_hit = 0;
	else
		this->_health_hit -= amount;
	std::cout << "ClapTrap " << this->_name << " took " << amount << " damage" << std::endl;
	if (this->_health_hit == 0)
		std::cout << "sory, it's over , ClapTrap " << this->_name << " has no more health" << std::endl;
	
}

void ClapTrap::beRepaired(unsigned int amount){
	if (this->_energy < 1){
		std::cout << "ClapTrap " << this->_name << " doesn't have enough energy" << std::endl;
		return ;
	}
	if (this->_health_hit < 1){
		std::cout << "ClapTrap " << this->_name << " doesn't have enough health" << std::endl;
		return;
	}
	if (this->_health_hit + amount > std::numeric_limits<unsigned int>::max()){
		std::cout << "add " << amount << " to health causes an overflow! " << std::endl;
		std::cout << "therefore health is limit to " << std::numeric_limits<unsigned int>::max() << "!"<< std::endl;
		this->_health_hit = std::numeric_limits<unsigned int>::max();
	}
	else
	{
		this->_health_hit += amount;
		std::cout << "ClapTrap " << this->_name << " add " << amount<< " to health( new value:" << this->_health_hit << ")." << std::endl;	
	}
	this->_energy--;
	return ;
}


