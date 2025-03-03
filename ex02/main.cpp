/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 17:31:56 by amirfatt          #+#    #+#             */
/*   Updated: 2024/09/28 16:05:38 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

std::ostream &operator<<(std::ostream &out, Fixed const &fixed) {
    out << fixed.toFloat();
    return out;
}

int main( void ) 
{
    Fixed a; // call default constructor
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) ); 
    
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b/a << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
    
    return 0;
}

