/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_lg.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouaarabe <ouaarabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 06:03:32 by ouaarabe          #+#    #+#             */
/*   Updated: 2023/05/15 06:10:59 by ouaarabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_swap(t_dlist **stack_a, t_dlist **stack_b, int i, int j)
{
	if ((*stack_a)->head->data <= j)
		pb(stack_a, stack_b, 1);
	else if ((*stack_a)->head->data <= i)
	{
		pb(stack_a, stack_b, 1);
		if ((*stack_b)->size >= 2)
			rb(stack_b, 1);
	}
	else
	{
		ra(stack_a, 1);
		if (!(*stack_b) && check_sorted(*stack_a))
			return ;
	}
}

void	bubble_sort(int **array, int length)
{
	int	temp;
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < length - 1)
	{
		while (j < length - i - 1)
		{
			if ((*array)[j] > (*array)[j + 1])
			{
				temp = (*array)[j];
				(*array)[j] = (*array)[j + 1];
				(*array)[j + 1] = temp;
			}
			j++;
		}
		i++;
		j = 0;
	}
}

void	fill_a(t_dlist **stack_a, t_dlist **stack_b)
{
	size_t	max_prev;
	size_t	max;
	int		c;

	c = 0;
	while ((*stack_b) && (*stack_b)->size > 1)
	{
		if ((*stack_b)->size > 2)
		{
			best_r(stack_b, &max_prev, &max);
			if (max_prev < max)
			{
				r_prev(stack_a, stack_b);
				c = 1;
			}
		}
		r_max(stack_a, stack_b);
		if (c == 1)
		{
			sa(stack_a, 1);
			c = 0;
		}
	}
}

void	fill_t(int **table, t_dlist **list)
{
	t_dlist		*tmp;
	size_t		i;

	i = 0;
	tmp = (*list);
	while (i < tmp->size)
	{
		(*table)[i] = tmp->head->data;
		tmp->head = tmp->head->next;
		i++;
	}
}

void	lg_sort(t_dlist **stack_a, t_dlist **stack_b)
{
	int	i;
	int	j;
	int	*table;

	while ((*stack_a)->size > 1)
	{
		table = NULL;
		table = malloc((*stack_a)->size * sizeof(int));
		if (!table)
			return ;
		fill_t(&table, stack_a);
		bubble_sort(&table, (*stack_a)->size);
		i = table[(*stack_a)->size / 8];
		j = table[((*stack_a)->size / 9) / 2];
		free(table);
		sort_swap(stack_a, stack_b, i, j);
	}
	fill_a(stack_a, stack_b);
	if (stack_b)
		pa(stack_a, stack_b, 1);
}
