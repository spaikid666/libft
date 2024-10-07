/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalguer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 12:38:33 by asalguer          #+#    #+#             */
/*   Updated: 2024/09/16 13:06:08 by asalguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while(s[i] != '\0')
	{
		if(s[i] == (char)c)
			return (char *)&s[i];
		i++;
	}
	return NULL;
}

int main()
{
    char *str = "Hola que tal?";
    int c = 'z';
    char *prueba = ft_strchr(str, c);
    printf("%s", prueba);
	return 0;
}