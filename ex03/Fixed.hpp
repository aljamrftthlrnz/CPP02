/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 17:32:18 by amirfatt          #+#    #+#             */
/*   Updated: 2024/09/24 11:29:43 by amirfatt         ###   ########.fr       */
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
        Fixed (const Fixed &other) ;
        ~Fixed () ;
        
        Fixed ( const int value ) ;
        Fixed ( const float value ) ;
        
        int             getRawBits ( void ) const; 
        void            setRawBits( int const raw );
        
        float           toFloat ( void ) const ;
        int             toInt ( void ) const ;
        
        /*          BINARY OPERATORS                    */
        /*        ARITHMETIC OPERATORS                  */
        Fixed           &operator= (const Fixed &f) ;
        Fixed           operator+(const Fixed &f) const ;
        Fixed           operator-(const Fixed &f) const ;
        Fixed           operator*(const Fixed &f) const ;
        Fixed           operator/(const Fixed &f) const ;
        
        /*        COMPARISON OPERATORS                  */
        bool            operator<(const Fixed &f) const ;           
        bool            operator>(const Fixed &f) const ;           
        bool            operator<=(const Fixed &f) const ;           
        bool            operator>=(const Fixed &f) const ;
        bool            operator==(const Fixed &f) const ;
        bool            operator!=(const Fixed &f) const ;


        /*       Pre-/Postincrement, -decrement         */
        Fixed&          operator++();
        Fixed           operator++(int);
        Fixed&          operator--();
        Fixed           operator--(int);

        static Fixed &min (Fixed &a, Fixed &b);
        static const Fixed &min (const Fixed &a, const Fixed &b);
        static Fixed &max (Fixed &a, Fixed &b);
        static const Fixed &max (const Fixed &a, const Fixed &b);
}; 



/* Overloaded Functions: Supply different semantics for a function;
At compile time, the compiler chooses which overload to use based on the types
and number of arguments passed by the caller; Default arguments can't be supplied for overloaded operators.
 */