/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 14:17:59 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/17 15:17:17 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

#include <iostream>

DiamondTrap::DiamondTrap(void) : ClapTrap("_clap_name"), name_("") {
  std::cout << "DiamondTrap default constructor called" << std::endl;
  hit_point_ = FragTrap::kInitHitPoint;
  energy_point_ = ScavTrap::kInitEnergyPoint;
  attack_damage_ = FragTrap::kInitAttackDamage;
}

DiamondTrap::DiamondTrap(const std::string &name)
    : ClapTrap(name + "_clap_name"), name_(name) {
  std::cout << "DiamondTrap constructor with name called" << std::endl;
  hit_point_ = FragTrap::kInitHitPoint;
  energy_point_ = ScavTrap::kInitEnergyPoint;
  attack_damage_ = FragTrap::kInitAttackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &origin) {
  std::cout << "DiamondTrap copy constructor called" << std::endl;
  *this = origin;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &rhs) {
  std::cout << "DiamondTrap assignment operator called" << std::endl;
  ClapTrap::operator=(rhs);
  return *this;
}

DiamondTrap::~DiamondTrap(void) {
  std::cout << "DiamondTrap (" << name_ << ") destructor called" << std::endl;
}

void DiamondTrap::attack(const std::string &target) {
  ScavTrap::attack(target);
}

void DiamondTrap::takeDamage(unsigned int amount) {
  FragTrap::takeDamage(amount);
}

void DiamondTrap::beRepaired(unsigned int amount) {
  FragTrap::beRepaired(amount);
}

void DiamondTrap::whoAmI(void) {
  std::cout << "DiamondTrap::name (" << name_ << ")" << std::endl;
  std::cout << "ClapTrap::name    (" << ClapTrap::name_ << ")" << std::endl;
}
