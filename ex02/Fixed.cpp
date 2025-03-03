/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 17:32:15 by amirfatt          #+#    #+#             */
/*   Updated: 2024/09/28 16:05:58 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* CONSTRUCTOR, DESTRUCTOR, COPY CONSTRUCTOR, COPY ASSIGNMENT OPERATOR*/
Fixed::Fixed () : _fixedPoint(0) {
    //std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed (const Fixed &f) 
{
    //std::cout << "Copy Constructor called" << std::endl;
    *this = f;
}

Fixed::Fixed ( const int value )
{
    //std::cout << "Int constructor called" << std::endl;
    this->_fixedPoint = value << this->_fractionalBits;
}

Fixed::Fixed (const float value)
{
    //std::cout << "Float constructor called" << std::endl;
    this->_fixedPoint = roundf(value * (1 << this->_fractionalBits));
}

Fixed::~Fixed () {
    //std::cout << "Destructor called" << std::endl;
}

/* MEMBER FUNCTIONS */
float Fixed::toFloat ( void ) const 
{
    return static_cast<float>(_fixedPoint) / (1 << this->_fractionalBits);
}

int Fixed::toInt ( void ) const {
    return this->_fixedPoint >> this->_fractionalBits; 
}

int Fixed::getRawBits ( void ) const { 
    return (this->_fixedPoint); 
} 

void Fixed::setRawBits ( int const raw ) { 
   this->_fixedPoint = raw; 
}

/* MEMBER FUNCTION TO OVERLOAD OPERATORS */
Fixed &Fixed::operator=(const Fixed &f)
{
        this->_fixedPoint = f.getRawBits(); 
        return *this;
}

Fixed Fixed::operator+(const Fixed &f) const
{
    return Fixed(this->toFloat() + f.toFloat());
}

Fixed Fixed::operator-(const Fixed &f) const
{
    return Fixed(this->toFloat() - f.toFloat());
}

Fixed Fixed::operator*(const Fixed &f) const
{
    return Fixed(this->toFloat() * f.toFloat());
}

Fixed Fixed::operator/(const Fixed &f) const
{
    return Fixed(this->toFloat() / f.toFloat()); 
}

bool Fixed::operator<(const Fixed &f) const
{
    return  this->getRawBits() < f.getRawBits();
}

bool Fixed::operator>(const Fixed &f) const 
{
    return this->getRawBits() > f.getRawBits();
}

bool Fixed::operator<=(const Fixed &f) const
{
    return this->getRawBits() <= f.getRawBits();   
}

bool Fixed::operator>=(const Fixed &f) const
{
    return this->getRawBits() >= f.getRawBits();
}

bool Fixed::operator==(const Fixed &f) const
{
    return this->getRawBits() == f.getRawBits();
}

bool Fixed::operator!=(const Fixed &f) const
{
    return this->getRawBits() != f.getRawBits();
}

Fixed &Fixed::operator++() 
{
    // Increase the internal fixed-point value
    this->_fixedPoint++;
    // Return the current object by reference
    return *this;  
}

Fixed Fixed::operator++(int) 
{
    // Create a temp copy of the current object
    Fixed tmp = *this; 
    this->_fixedPoint++;

    return tmp; 
}

Fixed &Fixed::operator--() 
{
    this->_fixedPoint--;
    return *this;
}

Fixed Fixed::operator--(int) 
{
    Fixed temp = *this;
    this->_fixedPoint--;
    return temp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    return (a < b) ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    return (a < b) ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    return (a > b) ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    return (a > b) ? a : b;
}