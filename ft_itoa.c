/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalguer <asalguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 16:00:16 by asalguer          #+#    #+#             */
/*   Updated: 2024/10/04 16:00:16 by asalguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_size(int n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_swap(char *str)
{
	int		i;
	int		j;
	char	t;

	i = 0;
	j = ft_strlen(str) - 1;
	while (i < j)
	{
		t = str[i];
		str[i] = str[j];
		str[j] = t;
		i++;
		j--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		i;
	int		size;
	char	*str;

	if (n > 2147483647 || n < -2147483648)
		return (NULL);
	i = 0;
	size = ft_size(n);
	str = malloc(sizeof(char) * (size + 1));
	if (n < 0)
	{
		str[0] = '-';
		n = n * (-1);
		i++;
	}
	while (n > 0)
	{
		str[i] = ((n % 10) + '0');
		i++;
	}
	if (n == 0)
		str[i++] = '0';
	str[i] = '\0';
	str = ft_swap(str);
	return (str);
}
