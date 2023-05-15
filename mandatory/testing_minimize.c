/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testing_minimize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouaarabe <ouaarabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 03:13:37 by ouaarabe          #+#    #+#             */
/*   Updated: 2023/05/15 06:02:01 by ouaarabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
void	best_r(t_dlist **stack_b, size_t *low_index_moves, size_t *high_index_moves)
{
	size_t	mx_pos;
	size_t	lmx_pos;

	mx_pos = max_pos(stack_b);
	if (mx_pos == 1)
	{
		*high_index_moves = 0;
		*low_index_moves = 1;
		return;
	}
	lmx_pos = max_minus_pos(stack_b);
	if (mx_pos > (*stack_b)->size / 2)
		*high_index_moves = ((*stack_b)->size / 2) - mx_pos;
	else 
		*high_index_moves = mx_pos;
	if (lmx_pos > (*stack_b)->size / 2)
		*low_index_moves = ((*stack_b)->size / 2) - lmx_pos;
	else 
		*low_index_moves = lmx_pos;
}

void	r_prev(t_dlist **stack_a, t_dlist **stack_b)
{
	size_t lmx_pos;

	lmx_pos = max_minus_pos(stack_b);
	while (lmx_pos != 1)
	{
		if (lmx_pos <= (*stack_b)->size / 2)
			rb(stack_b, 1);
		else if (lmx_pos > (*stack_b)->size / 2)
			rrb(stack_b, 1);
		lmx_pos = max_minus_pos(stack_b);
	}
	if (lmx_pos == 1)
		pa(stack_a, stack_b, 1);
}

void 	r_max(t_dlist **stack_a, t_dlist **stack_b)
{
	size_t mx_pos;
	mx_pos = max_pos(stack_b);
	while (mx_pos != 1)
	{
		if (mx_pos <= (*stack_b)->size / 2)
			rb(stack_b, 1);
		else if (mx_pos > (*stack_b)->size / 2)
			rrb(stack_b, 1);
		mx_pos = max_pos(stack_b);
	}
	if (mx_pos == 1)
		pa(stack_a, stack_b, 1);
}

void	fill_a_min(t_dlist **stack_a, t_dlist **stack_b)
{
	size_t 	max_prev;
	size_t	max;
	int		c;
	
	c = 0;
	while ((*stack_b) && (*stack_b)->size > 1)
	{
		if((*stack_b)->size > 2)
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
