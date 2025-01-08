/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 15:10:31 by pleander          #+#    #+#             */
/*   Updated: 2025/01/05 10:42:26 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point
{
   public:
	Point();
	Point(const float, const float);
	Point(const Point&);
	Point& operator=(const Point&);
	Fixed getX(void) const;
	Fixed getY(void) const;
	~Point();

   private:
	const Fixed x_;
	const Fixed y_;
};
