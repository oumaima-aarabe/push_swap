/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_sh.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouaarabe <ouaarabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 02:57:53 by ouaarabe          #+#    #+#             */
/*   Updated: 2023/05/04 23:26:27 by ouaarabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	_3sort(t_dlist **stack_a)
{
	int	min;
	int	max;

	max = max_pos(stack_a);
	min = min_pos(stack_a);
	if (min == 2 && max == 1)
		ra(stack_a);
	else if (min == 3 && max == 2)
		rra(stack_a);
	else if ((max - min) != 2)
	{
		sa(stack_a);
		_3sort(stack_a);
	}
}

void	sh_sort(t_dlist **stack_a, t_dlist **stack_b)
{
	int	pos;
	int	i;

	i = 0;
	if ((*stack_a)->size == 2)
		sa(stack_a);
	else if ((*stack_a)->size == 3)
		_3sort(stack_a);
	else
	{
		pos = min_pos(stack_a);
		while (pos != 1)
		{
			if (pos <= (*stack_a)->size / 2)
				ra(stack_a);
			else
				rra(stack_a);
			pos = min_pos(stack_a);
		}
		pb(stack_a, stack_b);
		sh_sort(stack_a, stack_b);
		pa(stack_a, stack_b);
	}
}

void	which_sort(t_dlist **stack_a)
{
	t_dlist	*stack_b;

	stack_b = NULL;
	if ((*stack_a)->size <= 7)
		sh_sort(stack_a, &stack_b);
	else
		lg_sort(stack_a, &stack_b);
}
