/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 14:09:32 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/17 15:17:23 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_TRAP_H_
#define DIAMOND_TRAP_H_

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
 public:
  DiamondTrap(void);
  DiamondTrap(const std::string &name);
  DiamondTrap(const DiamondTrap &origin);
  DiamondTrap &operator=(const DiamondTrap &rhs);
  ~DiamondTrap(void);

  void attack(const std::string &target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);

  void whoAmI(void);

 private:
  std::string name_;
};

#endif
