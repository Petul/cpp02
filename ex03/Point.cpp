/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 15:15:49 by pleander          #+#    #+#             */
/*   Updated: 2024/11/28 15:20:38 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

#include "Fixed.hpp"

Point::Point(void) : x_{0}, y_{0} {}

Point::Point(const float x, const float y) : x_{x}, y_{y} {}

Point::Point(const Point& p) : x_{p.x_}, y_{p.y_} {}

Point& Point::operator=(const Point& p)
{
	this->x_ = p.x_;
	this->y_ = p.y_;
}
