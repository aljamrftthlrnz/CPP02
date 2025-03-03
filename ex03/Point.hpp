/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:09:34 by amirfatt          #+#    #+#             */
/*   Updated: 2024/09/24 11:18:02 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Fixed.hpp"

class Point {
    private:
        const Fixed _x;
        const Fixed _y;
    public: 
        Point () ; 
        Point (const float a, const float b);
        Point ( const Point &o ) ;
        ~Point () ;

        const Fixed &getX() const ; 
        const Fixed &getY() const ; 
        
};

bool bsp( Point const a, Point const b, Point const c, Point const point);
std::ostream &operator<<(std::ostream &out, const Fixed &fixed);