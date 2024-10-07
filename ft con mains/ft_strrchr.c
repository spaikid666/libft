/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalguer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 10:52:25 by asalguer          #+#    #+#             */
/*   Updated: 2024/09/18 10:52:29 by asalguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char    *ft_strrchr(const char *s, int c)
{
    int i;

    i = 0;
    while(s[i] != '\0')
        i++;
    while(i >=0)
    {
        if(s[i] == (char)c)
            return (char *)&s[i];
        i--;
    }
    return  NULL;
}

int main()
{
    char *str = "Hola que tal?";
    int c = 'z';
    char *prueba = ft_strrchr(str, c);
    printf("%s", prueba);
}