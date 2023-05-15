/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testing_minimize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouaarabe <ouaarabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 03:13:37 by ouaarabe          #+#    #+#             */
/*   Updated: 2023/05/15 06:13:54 by ouaarabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	best_r(t_dlist **stack_b, size_t *lim, size_t *him)
{
	size_t	mx_pos;
	size_t	lmx_pos;

	mx_pos = max_pos(stack_b);
	if (mx_pos == 1)
	{
		*him = 0;
		*lim = 1;
		return ;
	}
	lmx_pos = max_prev_pos(stack_b);
	if (mx_pos > (*stack_b)->size / 2)
		*him = ((*stack_b)->size / 2) - mx_pos;
	else
		*him = mx_pos;
	if (lmx_pos > (*stack_b)->size / 2)
		*lim = ((*stack_b)->size / 2) - lmx_pos;
	else
		*lim = lmx_pos;
}

void	r_prev(t_dlist **stack_a, t_dlist **stack_b)
{
	size_t	lmx_pos;

	lmx_pos = max_prev_pos(stack_b);
	while (lmx_pos != 1)
	{
		if (lmx_pos <= (*stack_b)->size / 2)
			rb(stack_b, 1);
		else if (lmx_pos > (*stack_b)->size / 2)
			rrb(stack_b, 1);
		lmx_pos = max_prev_pos(stack_b);
	}
	if (lmx_pos == 1)
		pa(stack_a, stack_b, 1);
}

void	r_max(t_dlist **stack_a, t_dlist **stack_b)
{
	size_t	mx_pos;

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
