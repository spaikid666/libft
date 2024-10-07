/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalguer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:05:15 by asalguer          #+#    #+#             */
/*   Updated: 2024/09/19 12:05:26 by asalguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int ft_tolower(int c)
{
    if(c >= 'A' && c <= 'Z')
        return c + 32;
    return c;
}

int main() {
    printf("%c -> %c\n", 'A', ft_tolower('a'));
    printf("%c -> %c\n", 'b', ft_tolower('b'));
    printf("%c -> %c\n", 'C', ft_tolower('C'));
    printf("%c -> %c\n", '1', ft_tolower('1'));

    return 0;
}