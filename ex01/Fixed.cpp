/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 17:32:15 by amirfatt          #+#    #+#             */
/*   Updated: 2024/09/28 15:46:30 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed () : _fixedPoint(0) {
    std::cout << "Default constructor called" << std::endl;
}

/*Fixed_point arithmetic: we represent numbers by shifting the integer 
part to make room for the fractional part;
We are using 8 fractional bits to convert the integer into a fixed-point representation
we shift it 8 bits to the left*/
Fixed::Fixed ( const int value )
{
    std::cout << "Int constructor called" << std::endl;
    // Shifting left means multiplying by 2⁸ = 256
    this->_fixedPoint = value << this->_fractionalBits;
}

/*Multiplication of float by 256 to convert it into a format where the
fractional part is shifted into an integer*/
Fixed::Fixed (const float value)
{
    std::cout << "Float constructor called" << std::endl;
    // Need to move tje fractional part of the float into the integer space
    this->_fixedPoint = roundf(value * (1 << this->_fractionalBits));
}

Fixed::Fixed (const Fixed &f) 
{
    std::cout << "Copy Constructor called" << std::endl;
    *this = f;
}

Fixed::~Fixed () {
    std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat ( void ) const 
{
    // converts this integer to a floating-point number so that it can handle decimal values.
    return static_cast<float>(_fixedPoint) / (1 << this->_fractionalBits);
}

int Fixed::toInt ( void ) const {
    return this->_fixedPoint >> this->_fractionalBits; 
}

Fixed &Fixed::operator=(const Fixed &f)
{
        std::cout << "Copy Assignment Operator called" << std::endl;
        this->_fixedPoint = f.getRawBits(); 
        return *this;
}

int Fixed::getRawBits ( void ) const 
{
    //std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixedPoint);  
} 

void Fixed::setRawBits ( int const raw )
{
    this->_fixedPoint = raw; 
}

std::ostream &operator<<(std::ostream &out, Fixed const &fixed) {
    out << fixed.toFloat();
    return out;
}