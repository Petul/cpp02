/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 12:55:07 by pleander          #+#    #+#             */
/*   Updated: 2024/11/26 15:28:12 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
   public:
	Fixed();
	Fixed(const Fixed&);
	Fixed(const int);
	Fixed(const float);
	Fixed& operator=(const Fixed&);
	~Fixed();
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;

   private:
	int fp_num_;
	static const int fraction_bits_ = 8;
};

std::ostream& operator<<(std::ostream&, const Fixed&);

#endif
