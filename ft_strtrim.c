/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalguer <asalguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 10:25:25 by asalguer          #+#    #+#             */
/*   Updated: 2024/10/09 18:18:39 by asalguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*delante(char const	*s1, char const *set)
{
	int		i;
	char	*str;

	i = 0;
	str = ft_strdup(s1);
	while (str[i] && ft_strchr(set, str[i]))
		i++;
	return (ft_strdup(str + i));
}

char	*detras(char *str, char const *set)
{
	int		i;

	i = ft_strlen(str);
	while (i >= 0 && ft_strchr(set, str[i]))
		i--;
	str[i + 1] = '\0';
	return (ft_strdup(str));
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		size;
	int		size2;
	char	*str1;
	char	*str2;

	size = ft_strlen(s1);
	if (!set)
		return (str1 = malloc(sizeof(char) * (size + 1)));
	if (!s1)
	{
		str1 = malloc(sizeof(char) * (1));
		str1[0] = '\0';
		return (str1);
	}
	str1 = delante(s1, set);
	str1 = detras(str1, set);
	size2 = ft_strlen(str1);
	str2 = malloc(sizeof(char) * (size2 + 1));
	return (str2 = ft_strdup(str1));
}
