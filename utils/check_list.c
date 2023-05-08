/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouaarabe <ouaarabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 01:40:03 by ouaarabe          #+#    #+#             */
/*   Updated: 2023/05/08 06:57:44 by ouaarabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	new_node(t_dlist **list, int nbr)
{
	t_dlist_item	*new;

	new = dlist_init(nbr);
	if (!(*list))
	{
		*list = (t_dlist *)malloc(sizeof(t_dlist));
		if (!(*list))
			return ;
		(*list)->head = new;
		new->next = new;
		new->prev = new;
		(*list)->size = 1;
	}
	else
	{
		new->next = (*list)->head;
		new->prev = (*list)->head->prev;
		((*list)->head->prev)->next = new;
		(*list)->head->prev = new;
		(*list)->size++;
	}
}

void	ft_error(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(1);
}
