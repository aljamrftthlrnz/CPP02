/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 18:13:14 by amirfatt          #+#    #+#             */
/*   Updated: 2024/09/20 15:06:24 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iomanip>
# include <iostream>
# include <string>
# include <fstream>

class Fixed {
    private :
        int _fixedPoint;
        static const int _fractionalBits = 8; 
    public : 
        Fixed () ;
        Fixed (const Fixed &f) ;
        Fixed &operator= (const Fixed &f) ;
        ~Fixed () ;
        int getRawBits ( void ) const; 
        void setRawBits( int const raw );
        
}; 
