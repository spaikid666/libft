/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalguer <asalguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 11:29:48 by asalguer          #+#    #+#             */
/*   Updated: 2024/10/08 11:29:48 by asalguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest_str, const void *src_str, size_t n)
{
	int				i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)src_str;
	str2 = (unsigned char *)dest_str;
	while (i < n)
	{
		str2[i] == str1[i];
		i++;
	}
	return (dest_str);
}
