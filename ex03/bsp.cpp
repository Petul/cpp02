/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 17:14:48 by pleander          #+#    #+#             */
/*   Updated: 2025/01/05 16:55:26 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

Fixed area(Point const p1, Point const p2, Point const p3)
{
	Fixed f = Fixed(0.5f) * (p1.getX() * (p2.getY() - p3.getY()) +
	                         (p2.getX() * (p3.getY() - p1.getY())) +
	                         (p3.getX() * (p1.getY() - p2.getY())));
	if (f < 0)
	{
		return (f * Fixed(-1));
	}
	return (f);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed a0{area(a, b, c)};
	Fixed a1{area(a, b, point)};
	Fixed a2{area(c, a, point)};
	Fixed a3{area(b, c, point)};

	if (a1 == 0 || a2 == 0 || a3 == 0)  // Point is on line or vertice
	{
		return false;
	}
	if (a0 == a1 + a2 + a3)
	{
		return true;
	}
	return false;
}
