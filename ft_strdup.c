/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: asalguer <asalguer@student.42.fr>          +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2024/10/08 10:31:01 by asalguer          #+#    #+#             */
/*   Updated: 2024/10/08 10:31:01 by asalguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>


char	*ft_strdup(const char *s)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	while (s[i] != '\0')
		i++;
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	while (j != i)
	{
		str[j] = s[j];
		j++;
	}
	return (str);
}
