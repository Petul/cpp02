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

class Fixed
{
   public:
	Fixed();
	Fixed(const Fixed& f) = default;
	Fixed& operator=(const Fixed& f) = default;
	~Fixed();
	int getRawBits(void);
	void setRawBits(int const raw);

   private:
	int fp_num_;
	static const int fraction_ = 8;
};
