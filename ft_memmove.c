/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalguer <asalguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 11:30:16 by asalguer          #+#    #+#             */
/*   Updated: 2024/10/08 11:30:16 by asalguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest_str, const void *src_str, size_t n)
{
	unsigned char		*dest;
	const unsigned char	*sour;

	dest = (unsigned char *)dest_str;
	sour = (const unsigned char *)src_str;
	if (dest > sour)
	{
		dest += n;
		sour += n;
		while (n--)
			*(--dest) = *(--sour);

	}
	else
	{
		while (n--)
			*dest++ = *sour++;
	}
	return (dest_str);
}
