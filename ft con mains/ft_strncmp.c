/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalguer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:50:51 by asalguer          #+#    #+#             */
/*   Updated: 2024/09/18 12:50:54 by asalguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, int n)
{
    int i;

    i = 0;
    while(s1[i] != '\0' && s2[i] != '\0' && i < n)
    {
        if(s1[i] != s2[i])
            return (unsigned char)s1[i] - (unsigned char)s2[i];
        i++;
    }
    return (unsigned char)s1[i] - (unsigned char)s2[i];
}


int ft_strncmp(const char *s1, const char *s2, int n);

int main() 
{
    const char *str1 = "Hola";
    const char *str2 = "Hola Mundo";
    int n = 4;

    int result = ft_strncmp(str1, str2, n);

    printf("%d\n", result);

    return 0;
}
