/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 11:26:59 by bsunda            #+#    #+#             */
/*   Updated: 2025/01/29 12:58:27 by bsunda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./ClapTrap.hpp"

class ScavTrap: public ClapTrap{

public:
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const & src);
	~ScavTrap();

	ScavTrap & operator=(ScavTrap const & rhs);
	void attack(const std::string& target);
	// void takeDamage(unsigned int amount);
	// void beRepaired(unsigned int amount);
	void guardGate();
	
private:
	std::string	_name;
	int			_health_hit;
	int			_energy;
	int			_attack_damage;	
};