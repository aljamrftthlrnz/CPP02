/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:21:28 by amirfatt          #+#    #+#             */
/*   Updated: 2024/09/24 11:29:55 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.hpp"

Point::Point () : _x(0), _y(0) {}

Point::~Point() {}

Point::Point(const Point &o) : _x(o._x), _y(o._y) {}

Point::Point(const float a, const float b) : _x(a), _y(b) {}

const Fixed &Point::getX() const {
    return _x;
}

const Fixed &Point::getY() const {
    return _y;
}