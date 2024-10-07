/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalguer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 11:43:17 by asalguer          #+#    #+#             */
/*   Updated: 2024/09/19 11:43:19 by asalguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memset(void *s, int c, size_t n)
{
    unsigned char *str;
    int i;

    *str = unsigned char *s;
    i = 0;
    while(i < n)
    {
        str[i] = (unsigned char)c;
        i++;
    }
    return  *s[i];
}

int main() {
    char buffer[10];
    
    // Usar memset para llenar el buffer con el carácter 'A'
    memset(buffer, 'A', sizeof(buffer));

    // Mostrar el resultado
    for (int i = 0; i < 10; i++) {
        printf("%c ", buffer[i]);  // Deberías ver 'A A A A A A A A A A'
    }
    printf("\n");

    return 0;
}