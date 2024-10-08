/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalguer <asalguer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 13:39:55 by asalguer          #+#    #+#             */
/*   Updated: 2024/10/08 21:52:45 by asalguer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	c;

	i = ft_strlen(src);
	j = ft_strlen(dst);
	c = 0;
	if (j == dstsize)
		return (i + j);
	while (src[c] != '\0' && j < (dstsize - 1))
	{
		dst[j] = src[c];
		j++;
		c++;
	}
	dst[j] = '\0';
	return (i + j);
}
