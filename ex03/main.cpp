/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:35:48 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/17 15:17:40 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "DiamondTrap.hpp"

int main(void) {
  {
    std::cout << "--- default constructor test ---" << std::endl;
    DiamondTrap c;
  }
  {
    std::cout << "--- constructor with name test ---" << std::endl;
    DiamondTrap c("TEST");

    std::cout << "--- copy constructor test ---" << std::endl;
    DiamondTrap d(c);

    std::cout << "--- assignment operator test ---" << std::endl;
    DiamondTrap e;
    e = c;
  }
  {
    DiamondTrap c("TEST");

    std::cout << "--- attack test ---" << std::endl;
    for (int i = 0; i < 50; i++) c.attack("someone");
    c.attack("someone");

    std::cout << "--- take damage test ---" << std::endl;
    for (int i = 0; i < 10; i++) c.takeDamage(10);
    c.takeDamage(10);

    std::cout << "--- repair test ---" << std::endl;
    for (int i = 0; i < 10; i++) c.beRepaired(10);
    c.beRepaired(10);

    std::cout << "--- misc test ---" << std::endl;
    c.guardGate();
    c.highFivesGuys();
    c.whoAmI();
  }
  return 0;
}
