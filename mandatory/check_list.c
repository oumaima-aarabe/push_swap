/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouaarabe <ouaarabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 01:40:03 by ouaarabe          #+#    #+#             */
/*   Updated: 2023/04/30 23:43:25 by ouaarabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <fcntl.h>

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

// int mostly_rsorted(t_dlist **list , int *pos)
// {
// 	t_dlist_item *tmp;
// 	int i;
// 	int j;

// 	*pos = 1;
// 	i = 1;
// 	j = 0;
// 	tmp = (*list)->head;
// 	while((j++ <= (*list)->size) && (i < ((*list)->size / 8)))
// 	{
// 		if (tmp->data > tmp->next->data)
// 		{
// 			if (!i)
// 				*pos = j;
// 		 	i++;
// 		}
// 		else
// 			i = 0;
// 		tmp = tmp->next;
// 	}
// 	return (i);
// }

// int sorted(t_dlist **list)
// {
// 	t_dlist_item *tmp;
// 	int i;
// 	int j;

// 	i = 1;
// 	j = 0;
// 	tmp = (*list)->head;
// 	while((j++ <= (*list)->size))
// 	{
// 		if (tmp->data < tmp->next->data)
// 		 	i++;
// 		else
// 			return (0);
// 		tmp = tmp->next;
// 	}
// 	printf ("%d\n\n\n%d\n\n", i, (*list)->size);
// 	if (i == (*list)->size)
// 		return (1);
// 	return (0);
	
// }
void	minimize(t_dlist **stack_a, t_dlist **stack_b)
{
	// int pos;
	// int i = mostly_rsorted(stack_a, &pos);
	// int j = 0;
	// if (i == ((*stack_a)->size / 8))
	// {
	// 	while (pos--)
	// 		ra(stack_a);
	// 	while ((*stack_a)->size &&/*j++ < i*/((*stack_a)->head->data > (*stack_a)->head->next->data))
	// 	{
	// 		pb(stack_a, stack_b);
	// 		rrb(stack_b);
	// 	}
	// 	while ((*stack_b) && (*stack_b)->size)
	// 		pa(stack_a, stack_b);
	// 		*stack_b = NULL;
	// 		exit (0) ;
	// 	if (sorted(stack_a))
	// 	lg_sort(stack_a, stack_b);
	// }
	// else
		lg_sort(stack_a, stack_b);
}