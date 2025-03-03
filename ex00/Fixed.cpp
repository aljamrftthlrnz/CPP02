/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 18:13:18 by amirfatt          #+#    #+#             */
/*   Updated: 2024/09/20 17:30:15 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

Fixed::Fixed () : _fixedPoint(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed () {
    std::cout << "Destructor called" << std::endl;
}

// // Kopierkonstrukor in C++
// // Konstruktor, der ein Objekt mit einem anderen Objekt derselben Klasse initialisiert.
// // Erstellt ein Objekt, indem er es mit einem zuvor erstellten Objekt derselben Klasse initialisiert 
// // Const - Qualifizierer optional, hinzugefügt damit wir das Objekt nicht versehentlich ändern

Fixed::Fixed (const Fixed &f)
{
    std::cout << "Copy Constructor called" << std::endl;
    *this = f;
}

Fixed &Fixed::operator=(const Fixed &f)
{
        std::cout << "Copy Assignment Operator called" << std::endl;
        this->_fixedPoint = f.getRawBits(); 
        return *this;
}

int Fixed::getRawBits ( void ) const 
{
    std::cout << "getRawBits member function called" << std::endl;
    return (_fixedPoint);  
} 

void Fixed::setRawBits ( int const raw )
{
    this->_fixedPoint = raw; 
}
