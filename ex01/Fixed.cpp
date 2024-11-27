/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:11:10 by pleander          #+#    #+#             */
/*   Updated: 2024/11/26 15:29:11 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#include <cmath>
#include <iostream>

Fixed::Fixed() : fp_num_{0}
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& f)
{
	std::cout << "Copy constructor called" << std::endl;
	this->fp_num_ = f.fp_num_;
}

Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called" << std::endl;
	this->fp_num_ = (num << this->fraction_bits_);
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called" << std::endl;
	this->fp_num_ = roundf(num * (1 << this->fraction_bits_));
}

Fixed& Fixed::operator=(const Fixed& f)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &f)
	{
		this->fp_num_ = f.fp_num_;
	}
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fp_num_);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->fp_num_ = raw;
}

float Fixed::toFloat(void) const
{
	return ((float)this->fp_num_ / (1 << this->fraction_bits_));
}

int Fixed::toInt(void) const
{
	return (this->fp_num_ >> this->fraction_bits_);
}

std::ostream& operator<<(std::ostream& out, const Fixed& f)
{
	out << f.toFloat();
	return out;
}
