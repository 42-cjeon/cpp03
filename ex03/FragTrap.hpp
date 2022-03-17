/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 12:07:56 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/17 17:30:12 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_H_
#define FRAG_TRAP_H_

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
 public:
  FragTrap(void);
  FragTrap(const std::string &name);
  FragTrap(const FragTrap &origin);
  FragTrap &operator=(const FragTrap &rhs);
  ~FragTrap(void);

  void attack(const std::string &target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);

  void highFivesGuys(void);

 protected:
  static const unsigned int kInitHitPoint = 100;
  static const unsigned int kInitEnergyPoint = 100;
  static const unsigned int kInitAttackDamage = 30;
};

#endif
