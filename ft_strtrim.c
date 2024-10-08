/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalguer <asalguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 10:25:25 by asalguer          #+#    #+#             */
/*   Updated: 2024/10/08 10:29:09 by asalguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	z1;
	int	z2;

	i = 0;
	j = 0;
	z1 = ft_strlen(s1);
	z2 = ft_strlen(set);
	if (!set)
		return (s1 = malloc(sizeof(char) * z1));
	while (s1[i] != '\0')
	{
		if (s1[i] == set[j])
		{
			if (s1[i + z2] == '\0')
			{
				s1[i] = '\0';
				break ;
			}
			s1[i] = s1[i + z2];
		}
		i++;
	}
	return (s1 = malloc(sizeof(char) * (z1 - z2)));
}
