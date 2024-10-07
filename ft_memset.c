/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalguer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 11:43:17 by asalguer          #+#    #+#             */
/*   Updated: 2024/09/19 11:43:19 by asalguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memset(void *s, int c, size_t n)
{
    unsigned char *str;
    int i;

    *str = unsigned char *s;
    i = 0;
    while(i < n)
    {
        str[i] = (unsigned char)c;
        i++;
    }
    return  *s[i];
}