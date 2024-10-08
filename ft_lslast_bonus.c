/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lslast.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalguer <asalguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 18:40:46 by asalguer          #+#    #+#             */
/*   Updated: 2024/10/05 20:26:07 by asalguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list	*ft_lstlast(t_list *lst)
{
	int		i;
	int		j;
	t_list	*current;

	i = 0;
	j = 0;
	if (!lst)
		return (NULL);
	current = lst;
	while (current != NULL)
	{
		current = current->next;
		i++;
	}
	current = lst;
	while (j < i - 1)
	{
		current = current->next;
		j++;
	}
	return (current);
}

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);

	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
