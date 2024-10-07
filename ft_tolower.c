/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalguer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:05:15 by asalguer          #+#    #+#             */
/*   Updated: 2024/09/19 12:05:26 by asalguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_tolower(int c)
{
    if(c >= 'A' && c <= 'Z')
        return c + 32;
    return c;
}