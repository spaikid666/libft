/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: asalguer <asalguer@student.42.fr>          +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2024/10/08 11:30:16 by asalguer          #+#    #+#             */
/*   Updated: 2024/10/08 11:30:16 by asalguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void	*ft_memmove(void *dest_str, const void *src_str, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;

	i = 0;
	j = 0;
	dest = (unsigned char *)dest_str;
	temp = ft_strlcpy(temp, src_str, n);
	j = (ft_strlen(dest_str) + (temp));
	if ((dest_str == NULL) && (src_str == NULL))
		return (NULL);
	dest = *dest_str;
	while (i < j)
	{
		dest + i = temp[i];
		i++;
	}
	return (dest);
}
