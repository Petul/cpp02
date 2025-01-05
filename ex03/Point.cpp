/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 15:15:49 by pleander          #+#    #+#             */
/*   Updated: 2025/01/05 16:31:34 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

#include "Fixed.hpp"

Point::Point(void) : x_{0}, y_{0}
{
}

Point::Point(const float x, const float y) : x_{x}, y_{y}
{
}

Point::~Point()
{
}

Point::Point(const Point& p) : x_{p.x_}, y_{p.y_}
{
}

Fixed Point::getX(void) const
{
	return (this->x_);
}

Fixed Point::getY(void) const
{
	return (this->y_);
}

Point& Point::operator=(const Point& p)
{
	const_cast<Fixed&>(this->x_) = p.x_;
	const_cast<Fixed&>(this->y_) = p.y_;
	return (*this);
}
