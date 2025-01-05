/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:22:40 by pleander          #+#    #+#             */
/*   Updated: 2025/01/05 16:57:16 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main(void)
{
	Point a(0, 0);
	Point b(10, 0);
	Point c(5, 10);
	Point p(5, 5);

	std::cout << "Should be inside: " << bsp(a, b, c, p) << std::endl;

	p = Point(15, 15);
	std::cout << "Should not be outside: " << bsp(a, b, c, p) << std::endl;

	p = Point(5, -1);
	std::cout << "Should not be inside: " << bsp(a, b, c, p) << std::endl;
}
