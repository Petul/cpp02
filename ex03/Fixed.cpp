/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:11:10 by pleander          #+#    #+#             */
/*   Updated: 2025/01/05 16:32:51 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#include <cmath>
#include <iostream>

Fixed::Fixed() : fp_num_{0}
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& f)
{
	// std::cout << "Copy constructor called" << std::endl;
	this->fp_num_ = f.fp_num_;
}

Fixed::Fixed(const int num)
{
	// std::cout << "Int constructor called" << std::endl;
	this->fp_num_ = (num << this->fraction_bits_);
}

Fixed::Fixed(const float num)
{
	// std::cout << "Float constructor called" << std::endl;
	this->fp_num_ = roundf(num * (1 << this->fraction_bits_));
}

Fixed& Fixed::operator=(const Fixed& f)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &f)
	{
		this->fp_num_ = f.fp_num_;
	}
	return *this;
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->fp_num_);
}

void Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member function called" << std::endl;
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

bool Fixed::operator>(const Fixed& f) const
{
	return (this->fp_num_ > f.fp_num_);
}

bool Fixed::operator<(const Fixed& f) const
{
	return (this->fp_num_ < f.fp_num_);
}

bool Fixed::operator>=(const Fixed& f) const
{
	return (this->fp_num_ < f.fp_num_);
}

bool Fixed::operator<=(const Fixed& f) const
{
	return (this->fp_num_ <= f.fp_num_);
}

bool Fixed::operator==(const Fixed& f) const
{
	return (this->fp_num_ == f.fp_num_);
}

bool Fixed::operator!=(const Fixed& f) const
{
	return (this->fp_num_ != f.fp_num_);
}

Fixed Fixed::operator+(const Fixed& f) const
{
	Fixed new_f;
	new_f.fp_num_ = this->fp_num_ + f.fp_num_;
	return new_f;
}

Fixed Fixed::operator-(const Fixed& f) const
{
	Fixed new_f;
	new_f.fp_num_ = this->fp_num_ - f.fp_num_;
	return new_f;
}

Fixed Fixed::operator*(const Fixed& f) const
{
	Fixed new_f;
	new_f.fp_num_ = (this->fp_num_ * f.fp_num_) / (1 << this->fraction_bits_);
	return new_f;
}

Fixed Fixed::operator/(const Fixed& f) const
{
	Fixed new_f;
	new_f.fp_num_ = (this->fp_num_ / f.fp_num_) * (1 << this->fraction_bits_);
	return new_f;
}

Fixed& Fixed::operator++()
{
	*this = *this + Fixed(1);
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed f{*this};
	++(*this);
	return f;
}

Fixed& Fixed::operator--()
{
	*this = *this - Fixed(1);
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed f{*this};
	--(*this);
	return f;
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	if (a < b)
	{
		return (a);
	}
	return (b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a < b)
	{
		return (a);
	}
	return (b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	if (a > b)
	{
		return (a);
	}
	return (b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a > b)
	{
		return (a);
	}
	return (b);
}

std::ostream& operator<<(std::ostream& out, const Fixed& f)
{
	out << f.toFloat();
	return out;
}
