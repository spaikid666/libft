/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalguer <asalguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 13:39:55 by asalguer          #+#    #+#             */
/*   Updated: 2024/10/08 14:03:46 by asalguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	int		c;

	i = ft_strlen(src);
	j = ft_strlen(dst);
	if (j == dstsize)
		return (i + j);
	if (dstsize > (i + j + 1))
	{
		
		i++;
	}

}
