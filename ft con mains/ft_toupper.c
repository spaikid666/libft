/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalguer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:05:15 by asalguer          #+#    #+#             */
/*   Updated: 2024/09/19 12:05:26 by asalguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int ft_toupper(int c)
{
    if(c >= 'a' && c <= 'z')
        return c - 32;
    return c;
}

int main() {
    printf("%c -> %c\n", 'a', ft_toupper('a'));  // a -> A
    printf("%c -> %c\n", 'b', ft_toupper('b'));  // b -> B
    printf("%c -> %c\n", 'C', ft_toupper('C'));  // C -> C (sin cambios)
    printf("%c -> %c\n", '1', ft_toupper('1'));  // 1 -> 1 (sin cambios)

    return 0;
}