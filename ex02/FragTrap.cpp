/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 12:12:42 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/17 14:01:58 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

#include <iostream>

FragTrap::FragTrap(void) {
  std::cout << "FragTrap default constructor called" << std::endl;
  hit_point_ = kInitHitPoint;
  energy_point_ = kInitEnergyPoint;
  attack_damage_ = kInitAttackDamage;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
  std::cout << "FragTrap constructor with name called" << std::endl;
  hit_point_ = kInitHitPoint;
  energy_point_ = kInitEnergyPoint;
  attack_damage_ = kInitAttackDamage;
}

FragTrap::FragTrap(const FragTrap &origin) {
  std::cout << "FragTrap copy constructor called" << std::endl;
  *this = origin;
}

FragTrap &FragTrap::operator=(const FragTrap &rhs) {
  std::cout << "FragTrap assignment operator called" << std::endl;
  ClapTrap::operator=(rhs);
  return *this;
}

FragTrap::~FragTrap(void) {
  std::cout << "FragTrap (" << name_ << ") destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void) {
  std::cout << "FragTrap <" << name_ << "> send positive h19H-pH1V35 request"
            << std::endl;
}

void FragTrap::attack(const std::string &target) {
  if (energy_point_ == 0) {
    std::cout << "FragTrap <" << name_ << "> is so tired... nothing happened."
              << std::endl;
  } else {
    std::cout << "FragTrap <" << name_ << "> attack <" << target << "> causing "
              << attack_damage_ << "points of damage" << std::endl;
    --energy_point_;
  }
}

void FragTrap::takeDamage(unsigned int amount) {
  if (hit_point_ < amount) {
    std::cout << "FragTrap <" << name_ << "> resists!! so he takes only "
              << hit_point_ << "points of damage" << std::endl;
    hit_point_ = 0;
  } else {
    std::cout << "FragTrap <" << name_ << "> takes " << amount
              << "points of damage.. it hurts!" << std::endl;
    hit_point_ -= amount;
  }
}

void FragTrap::beRepaired(unsigned int amount) {
  hit_point_ += amount;
  std::cout << "FragTrap <" << name_ << "> recovered " << amount
            << "points of damage.";
  if (hit_point_ > kInitHitPoint) {
    std::cout << " Overcharged!! feel so good!!!";
  }
  std::cout << std::endl;
}
