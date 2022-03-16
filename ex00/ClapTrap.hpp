/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 14:24:30 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/16 17:41:01 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_H_
#define CLAP_TRAP_H_

#include <string>

class ClapTrap {
 public:
  ClapTrap(void);
  ClapTrap(const std::string &name);
  ClapTrap(const ClapTrap &orsigin);
  ClapTrap &operator=(const ClapTrap &rhs);
  ~ClapTrap(void);

  const std::string &name(void) const;
  unsigned int hit_point(void) const;
  unsigned int energy_point(void) const;
  unsigned int attack_damege(void) const;

  void attack(const std::string &target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);

 private:
  static const unsigned int kHitPointOverCharge = 10;

  const std::string name_;
  unsigned int hit_point_;
  unsigned int energy_point_;
  unsigned int attack_damege_;
};

#endif
