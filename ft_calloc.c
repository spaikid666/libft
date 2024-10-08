/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: asalguer <asalguer@student.42.fr>          +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2024/10/08 11:26:39 by asalguer          #+#    #+#             */
/*   Updated: 2024/10/08 11:26:39 by asalguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	size_t			i;
	void			*arr;
	unsigned char	*p;

	arr = malloc(nitems * size);
	if (arr == NULL)
		return (NULL);
	i = 0;
	p = arr;
	while (i < nitems * size)
	{
		p[i] = 0;
		i++;
	}
	return (arr);
}
