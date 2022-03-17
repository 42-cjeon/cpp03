/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 14:24:30 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/17 15:17:12 by cjeon            ###   ########.fr       */
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
  virtual ~ClapTrap(void);

  const std::string &name(void) const;
  unsigned int hit_point(void) const;
  unsigned int energy_point(void) const;
  unsigned int attack_damage(void) const;

  void set_name(const std::string &name);
  void set_hit_point(unsigned int hit_point);
  void set_energy_point(unsigned int energy_point);
  void set_attack_damage(unsigned int attack_damage);

  virtual void attack(const std::string &target);
  virtual void takeDamage(unsigned int amount);
  virtual void beRepaired(unsigned int amount);

 protected:
  std::string name_;
  unsigned int hit_point_;
  unsigned int energy_point_;
  unsigned int attack_damage_;

  static const unsigned int kInitHitPoint = 10;
  static const unsigned int kInitEnergyPoint = 10;
  static const unsigned int kInitAttackDamage = 0;
};

#endif
