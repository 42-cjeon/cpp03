/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:35:48 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/17 13:59:10 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "FragTrap.hpp"

int main(void) {
  { FragTrap c; }
  {
    FragTrap c("TEST");
    FragTrap d(c);
    FragTrap e;
    e = c;
  }
  {
    FragTrap c("TEST");

    for (int i = 0; i < 100; i++) c.attack("someone");
    c.attack("someone");

    for (int i = 0; i < 10; i++) c.takeDamage(10);
    c.takeDamage(10);

    for (int i = 0; i < 10; i++) c.beRepaired(10);
    c.beRepaired(10);

    c.highFivesGuys();
  }
  return 0;
}
