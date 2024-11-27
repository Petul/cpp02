/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:22:40 by pleander          #+#    #+#             */
/*   Updated: 2024/11/26 15:23:54 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed a2{12};
	Fixed const b(Fixed(5.05f) * Fixed(2));
	Fixed const b2{123.f};
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, a2) << std::endl;
	std::cout << Fixed::min(a, a2) << std::endl;
	std::cout << Fixed::max(b, b2) << std::endl;
	std::cout << Fixed::min(b, b2) << std::endl;
	return 0;
}
