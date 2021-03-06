/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:35:48 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/17 14:04:39 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "ScavTrap.hpp"

int main(void) {
  { ScavTrap c; }
  {
    ScavTrap c("TEST");
    ScavTrap d(c);
    ScavTrap e;
    e = c;
  }
  {
    ScavTrap c("TEST");

    for (int i = 0; i < 50; i++) c.attack("someone");
    c.attack("someone");

    for (int i = 0; i < 10; i++) c.takeDamage(10);
    c.takeDamage(10);

    for (int i = 0; i < 10; i++) c.beRepaired(10);
    c.beRepaired(10);

    c.guardGate();
  }
  return 0;
}
