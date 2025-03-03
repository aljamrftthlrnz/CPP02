/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 17:32:18 by amirfatt          #+#    #+#             */
/*   Updated: 2024/09/28 15:50:12 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>
# include <iomanip>
# include <math.h>
# include <fstream> 

class Fixed {
    private :
        int _fixedPoint;
        static const int _fractionalBits = 8; 
    public : 
        Fixed () ;
        // Convert Integer into a fixed-point value
        Fixed (const Fixed &other) ;
        Fixed ( const int value ) ;
        Fixed ( const float value ) ;
        Fixed &operator= (const Fixed &f) ;
        ~Fixed () ;
        int getRawBits ( void ) const; 
        void setRawBits( int const raw );
        float           toFloat ( void ) const ;
        int             toInt ( void ) const ;
}; 

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);
