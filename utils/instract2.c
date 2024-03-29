/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instract2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouaarabe <ouaarabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 02:40:12 by ouaarabe          #+#    #+#             */
/*   Updated: 2023/05/08 07:02:16 by ouaarabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	dlist_pop_front(t_dlist **stack)
{
	int				value;
	t_dlist_item	*temp;

	if (!(*stack))
		exit(1);
	value = (*stack)->head->data;
	if ((*stack)->size == 1)
	{
		free((*stack)->head);
		(*stack)->size--;
		free(*stack);
	}
	else
	{	
		temp = (*stack)->head;
		(*stack)->head->prev->next = (*stack)->head->next;
		(*stack)->head->next->prev = (*stack)->head->prev;
		(*stack)->head = (*stack)->head->next;
		free(temp);
		(*stack)->size--;
	}
	return (value);
}

void	dlist_push_front(t_dlist **list, t_dlist **list2)
{
	t_dlist_item	*node;

	if (!(*list2))
		exit(1);
	if (!(*list))
	{
		*list = malloc(sizeof(t_dlist));
		(*list)->head = dlist_init(dlist_pop_front(list2));
		(*list)->head->next = (*list)->head;
		(*list)->head->prev = (*list)->head;
		(*list)->size = 1;
		if (*list == NULL)
			exit(1);
	}
	else
	{
		node = dlist_init(dlist_pop_front(list2));
		node->prev = (*list)->head->prev;
		node->next = (*list)->head;
		(*list)->head->prev->next = node;
		(*list)->head->prev = node;
		(*list)->head = node;
		(*list)->size++;
	}
}

void	swap(t_dlist **stack)
{
	int	data;

	if (!(*stack) || (*stack)->size < 2)
		exit(1);
	data = (*stack)->head->data;
	(*stack)->head->data = ((*stack)->head)->next->data;
	((*stack)->head)->next->data = data;
}

void	rrr(t_dlist **stack_a, t_dlist **stack_b, int m)
{
	if (((*stack_a)->size < 2) || ((*stack_b)->size < 2))
		exit(1);
	(*stack_a)->head = (*stack_a)->head->prev;
	(*stack_b)->head = (*stack_b)->head->prev;
	if (m)
		ft_putendl_fd("rrr", 1);
}
