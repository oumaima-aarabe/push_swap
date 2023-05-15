/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouaarabe <ouaarabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 22:13:58 by ouaarabe          #+#    #+#             */
/*   Updated: 2023/05/15 04:14:23 by ouaarabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_dlist_item	*dlist_init(int data)
{
	t_dlist_item	*d;

	d = (t_dlist_item *) malloc(sizeof(t_dlist_item));
	if (d == NULL)
		return (NULL);
	d->next = NULL;
	d->prev = NULL;
	d->data = data;
	return (d);
}

int	min_pos(t_dlist **dlist)
{
	int			pos_min;
	t_dlist		*temp;
	int			min;
	size_t		i;

	pos_min = 1;
	temp = *dlist;
	min = temp->head->data;
	i = 1;
	while (i <= temp->size)
	{
		if (temp->head->data < min)
		{
			min = temp->head->data;
			pos_min = i;
		}
		temp->head = temp->head->next;
		i++;
	}
	return (pos_min);
}

int	max_pos(t_dlist **dlist)
{
	int				pos_max;
	t_dlist_item	*temp;
	size_t			i;
	int				max;

	pos_max = 1;
	i = 1;
	temp = (*dlist)->head;
	max = temp->data;
	while (i <= (*dlist)->size)
	{
		if (temp->data > max)
		{
			max = temp->data;
			pos_max = i;
		}
		temp = temp->next;
		i++;
	}
	return (pos_max);
}

int	max_minus_pos(t_dlist **dlist)
{
	size_t			pos_max;
	size_t			low_max_pos;
	t_dlist_item	*temp;
	size_t			i;
	int			low_max;

	pos_max = max_pos(dlist);
	if(pos_max == 1)
	{
		i = 2;
		low_max_pos = 2;
	}
	else
	{
		i = 1;
		low_max_pos = 1;
	}
	i = 1;
	temp = (*dlist)->head;
	low_max = temp->data;
	while (i <= (*dlist)->size)
	{
		if (temp->data > low_max && i != pos_max)
		{
			low_max = temp->data;
			low_max_pos = i;
		}
		temp = temp->next;
		i++;
	}
	return (low_max_pos);
}