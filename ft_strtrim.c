/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalguer <asalguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 10:25:25 by asalguer          #+#    #+#             */
/*   Updated: 2024/10/10 23:47:23 by asalguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		front;
	int		size;
	char	*str;

	front = 0;
	if (!s1 || !set)
		return (NULL);
	size = ft_strlen(s1);
	while (s1[front] && ft_strchr(set, s1[front]))
		front++;
	while (size > front && ft_strchr(set, s1[size - 1]))
		size--;
	str = ft_calloc((size - front + 1), sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1 + front, size - front + 1);
	return (str);
}
