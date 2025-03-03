/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 09:32:51 by amirfatt          #+#    #+#             */
/*   Updated: 2024/09/28 16:19:18 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.hpp"

int main ()
{
    Point a(0.0f, 0.0f);
    Point b(3.0f, -1.0f);
    Point c(2.0f, 3.0f);
    Point inside(2.0f, 2.0f);
    Point outside(10.0f, 10.0f);

    if (bsp(a, b, c, inside))
        std::cout << "The point (2, 2) is inside the triangle.\n";
    else
        std::cout << "The point (2, 2) is outside the triangle.\n";

    if (bsp(a, b, c, outside))
        std::cout << "The point (10, 10) is inside the triangle.\n";
    else
        std::cout << "The point (10, 10) is outside the triangle.\n";

    return 0;
}