/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 12:07:56 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/17 15:17:51 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_H_
#define SCAV_TRAP_H_

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
 public:
  ScavTrap(void);
  ScavTrap(const std::string &name);
  ScavTrap(const ScavTrap &origin);
  ScavTrap &operator=(const ScavTrap &rhs);
  virtual ~ScavTrap(void);

  virtual void attack(const std::string &target);
  virtual void takeDamage(unsigned int amount);
  virtual void beRepaired(unsigned int amount);

  void guardGate(void);

 protected:
  static const unsigned int kInitHitPoint = 100;
  static const unsigned int kInitEnergyPoint = 50;
  static const unsigned int kInitAttackDamage = 20;
};

#endif
