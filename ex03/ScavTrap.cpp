/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 12:12:42 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/17 15:17:46 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

#include <iostream>

ScavTrap::ScavTrap(void) {
  std::cout << "ScavTrap default constructor called" << std::endl;
  hit_point_ = kInitHitPoint;
  energy_point_ = kInitEnergyPoint;
  attack_damage_ = kInitAttackDamage;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
  std::cout << "ScavTrap constructor with name called" << std::endl;
  hit_point_ = kInitHitPoint;
  energy_point_ = kInitEnergyPoint;
  attack_damage_ = kInitAttackDamage;
}

ScavTrap::ScavTrap(const ScavTrap &origin) {
  std::cout << "ScavTrap copy constructor called" << std::endl;
  *this = origin;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs) {
  std::cout << "ScavTrap assignment operator called" << std::endl;
  ClapTrap::operator=(rhs);
  return *this;
}

ScavTrap::~ScavTrap(void) {
  std::cout << "ScavTrap (" << name_ << ") destructor called" << std::endl;
}

void ScavTrap::guardGate(void) {
  std::cout << "ScavTrap <" << name_ << "> enterred G4T3-K33P3R mode"
            << std::endl;
}

void ScavTrap::attack(const std::string &target) {
  if (energy_point_ == 0) {
    std::cout << "ScavTrap <" << name_ << "> is so tired... nothing happened."
              << std::endl;
  } else {
    std::cout << "ScavTrap <" << name_ << "> attack <" << target << "> causing "
              << attack_damage_ << "points of damage" << std::endl;
    --energy_point_;
  }
}

void ScavTrap::takeDamage(unsigned int amount) {
  if (hit_point_ < amount) {
    std::cout << "ScavTrap <" << name_ << "> resists!! so he takes only "
              << hit_point_ << "points of damage" << std::endl;
    hit_point_ = 0;
  } else {
    std::cout << "ScavTrap <" << name_ << "> takes " << amount
              << "points of damage.. it hurts!" << std::endl;
    hit_point_ -= amount;
  }
}

void ScavTrap::beRepaired(unsigned int amount) {
  hit_point_ += amount;
  std::cout << "ScavTrap <" << name_ << "> recovered " << amount
            << "points of damage.";
  if (hit_point_ > kInitHitPoint) {
    std::cout << " Overcharged!! feel so good!!!";
  }
  std::cout << std::endl;
}
