/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:35:48 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/16 17:39:10 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "ClapTrap.hpp"

int main(void) {
  { ClapTrap c; }
  {
    ClapTrap c("TEST");
    ClapTrap d(c);
    ClapTrap e;
    e = c;
  }
  {
    ClapTrap c("TEST");

    for (int i = 0; i < 10; i++) c.attack("someone");
    c.attack("someone");

    for (int i = 0; i < 10; i++) c.takeDamage(1);
    c.takeDamage(1);

    for (int i = 0; i < 10; i++) c.beRepaired(1);
    c.beRepaired(1);
  }
  return 0;
}
