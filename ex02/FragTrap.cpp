/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 12:40:40 by bsunda            #+#    #+#             */
/*   Updated: 2025/02/03 11:07:59 by bsunda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap() {
	this->_health_hit = 100;
	this->_energy = 50;
	this->_attack_damage = 20;
	std::cout << "FragTrav Constructor default called" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name): ClapTrap() {
	this->_name = name;
	this->_health_hit = 100;
	this->_energy = 50;
	this->_attack_damage = 20;
	std::cout << "FragTrap Constructor with name called" << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const & src): ClapTrap(src){
	std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = src;
	return ; 
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap Destructor called" << std::endl;
	return ;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs){
		this->_name = rhs._name;
		this->_attack_damage = rhs._attack_damage;
		this->_energy = rhs._energy;
		this->_health_hit = rhs._health_hit;
	}
	return *this;
}


void FragTrap::attack(const std::string& target){
	if (this->_energy < 1){
		std::cout << "FragTrap " << this->_name << " doesn't have enough energy" << std::endl;
		return ;
	}
	if (this->_health_hit < 1){
		std::cout << "FragTrap " << this->_name << " doesn't have enough health" << std::endl;
		return ;
	}
	std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
	this->_energy--;
	return ;
}



void	FragTrap::highFivesGuys( void ){
	if (this->_health_hit < 1){
		std::cout << this->_name << "high fives is impossible , no more health" << std::endl;
		return ;
	}
	if (this->_energy < 1){
		std::cout <<  this->_name << " can't high fives, no more energy" << std::endl;
		return ;
	}
	std::cout << this->_name << " let's do a high five " << std::endl;
	this->_energy--;

}
