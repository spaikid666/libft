/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalguer <asalguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:40:57 by asalguer          #+#    #+#             */
/*   Updated: 2024/10/08 12:58:15 by asalguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*str1;
	char	*str2;

	i = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	while (str1[i] && str2[i] && i < n)
	{
		if (i + 1 == n && str1[i] == str2[i])
			return (0);
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
}
