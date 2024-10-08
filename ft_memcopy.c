/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcopy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalguer <asalguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 11:29:33 by asalguer          #+#    #+#             */
/*   Updated: 2024/10/08 11:29:43 by asalguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest_str, const void *src_str, size_t n)
{
	size_t i;
	unsigned char *str2 = *dest_str;
	unsigned char *str1 = *src_str;

	i = 0;
	while (i < n)
	{
		str1[i] = str2[i];
		i++;
	}
	return (dest_str);
}
