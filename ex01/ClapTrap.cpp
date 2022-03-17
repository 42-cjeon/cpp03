/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 14:22:44 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/17 13:54:27 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#include <iostream>

ClapTrap::ClapTrap(void)
    : name_(""),
      hit_point_(kInitHitPoint),
      energy_point_(kInitEnergyPoint),
      attack_damage_(kInitAttackDamage) {
  std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name)
    : name_(name),
      hit_point_(kInitHitPoint),
      energy_point_(kInitEnergyPoint),
      attack_damage_(kInitAttackDamage) {
  std::cout << "ClapTrap constructor with name called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &origin) {
  std::cout << "ClapTrap copy constructor called" << std::endl;
  *this = origin;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs) {
  std::cout << "ClapTrap assignment operator called" << std::endl;
  name_ = rhs.name();
  hit_point_ = rhs.hit_point();
  energy_point_ = rhs.energy_point();
  attack_damage_ = rhs.attack_damage();
  return *this;
}

ClapTrap::~ClapTrap(void) {
  std::cout << "ClapTrap (" << name_ << ") destructor called" << std::endl;
}

const std::string &ClapTrap::name(void) const { return name_; }

unsigned int ClapTrap::hit_point(void) const { return hit_point_; }

unsigned int ClapTrap::energy_point(void) const { return energy_point_; }

unsigned int ClapTrap::attack_damage(void) const { return attack_damage_; }

void ClapTrap::set_name(const std::string &name) { name_ = name; }

void ClapTrap::set_hit_point(unsigned int hit_point) { hit_point_ = hit_point; }

void ClapTrap::set_energy_point(unsigned int energy_point) {
  energy_point_ = energy_point;
}

void ClapTrap::set_attack_damage(unsigned int attack_damage) {
  attack_damage_ = attack_damage;
}

void ClapTrap::attack(const std::string &target) {
  if (energy_point_ == 0) {
    std::cout << "ClapTrap <" << name_ << "> is so tired... nothing happened."
              << std::endl;
  } else {
    std::cout << "ClapTrap <" << name_ << "> attack <" << target << "> causing "
              << attack_damage_ << "points of damage" << std::endl;
    --energy_point_;
  }
}

void ClapTrap::takeDamage(unsigned int amount) {
  if (hit_point_ < amount) {
    std::cout << "ClapTrap <" << name_ << "> resists!! so he takes only "
              << hit_point_ << "points of damage" << std::endl;
    hit_point_ = 0;
  } else {
    std::cout << "ClapTrap <" << name_ << "> takes " << amount
              << "points of damage.. it hurts!" << std::endl;
    hit_point_ -= amount;
  }
}

void ClapTrap::beRepaired(unsigned int amount) {
  hit_point_ += amount;
  std::cout << "ClapTrap <" << name_ << "> recovered " << amount
            << "points of damage.";
  if (hit_point_ > kInitHitPoint) {
    std::cout << " Overcharged!! feel so good!!!";
  }
  std::cout << std::endl;
}
