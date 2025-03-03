/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:20:57 by amirfatt          #+#    #+#             */
/*   Updated: 2024/09/28 16:25:43 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed triangleArea (Point const &a, Point const &b, Point const &c)
{
    return Fixed (a.getX()*(b.getY() - c.getY()) + b.getX()*(c.getY() - a.getY()) + c.getX()*(a.getY() - b.getY())) / Fixed (2.0f); 
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed TotalArea = triangleArea (a, b, c);
    if(TotalArea < 0)
        TotalArea = TotalArea * -1;
    Fixed areaBCP = triangleArea (point, b, c);
    if(areaBCP < 0)
        areaBCP = areaBCP * -1;
    Fixed areaABP = triangleArea (point, a, b);
    if(areaABP < 0)
       areaABP = areaABP * -1;
    Fixed areaACP = triangleArea (point, c, a); 
    if(areaACP < 0)
       areaACP = areaACP * -1;
    return  TotalArea == (areaABP + areaACP + areaBCP) && 
            areaABP != Fixed(0.0f) && areaACP != Fixed(0.0f) 
            && areaBCP != Fixed(0.0f);
}