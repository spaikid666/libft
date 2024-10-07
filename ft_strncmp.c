/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalguer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:50:51 by asalguer          #+#    #+#             */
/*   Updated: 2024/09/18 12:50:54 by asalguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(const char *s1, const char *s2, int n)
{
    int i;

    i = 0;
    if( i == n)
        return 0;
    while(s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
    {
        if((i + 1) == n)
            return (unsigned char)s1[i] - (unsigned char)s2[i];
        i++;
    }
    return (unsigned char)s1[i] - (unsigned char)s2[i];
}