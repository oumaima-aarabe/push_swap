/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_lg.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbrahm <aelbrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 06:03:32 by ouaarabe          #+#    #+#             */
/*   Updated: 2023/04/26 14:35:46 by aelbrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_swap(t_dlist **stack_a, t_dlist **stack_b, int i, int j)
{
	if ((*stack_a)->head->data <= j)
		pb(stack_a, stack_b);
	else if ((*stack_a)->head->data <= i)
	{
		pb(stack_a, stack_b);
		if ((*stack_b)->size >= 2)
			rb(stack_b);
	}
	else 
		ra(stack_a);
}

void	fake_sort(int **table, int lenght)
{
	int		tmp;
	int		i;
	int		j;

	i = 0;
	while (i < lenght)
	{
		j = i + 1;
		while (j < lenght)
		{
			if ((*table)[i] > (*table)[j])
			{
				tmp = (*table)[i];
				(*table)[i] = (*table)[j];
				(*table)[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

// 9awdi 9adi hadi **************
void	fill_a(t_dlist **stack_a, t_dlist **stack_b)
{
	int mx_pos;
	
	while((*stack_b) && (*stack_b)->size > 1)
	{
		mx_pos = max_pos(stack_b);
		while (mx_pos != 1)
		{
			if (mx_pos <= (*stack_b)->size / 2)
				rb(stack_b);
			else
				rrb(stack_b);
			mx_pos = max_pos(stack_b);
		}
		if (mx_pos == 1)
			pa(stack_a, stack_b);
			// printf("{{%d}}\n", (*stack_a)->head->data);
	}	
}

void fill_t(int **table, t_dlist **list)
{
	t_dlist *tmp;
	int i;
	
	i = 0;
	tmp = (*list);

	while (i < tmp->size)
	{
		(*table)[i] = tmp->head->data;
		tmp->head = tmp->head->next;
		i++;
	}
}

void lg_sort(t_dlist **stack_a, t_dlist **stack_b)
{
	int i;
	int j;
	int *table;
	int hh = 0;

	while ((*stack_a)->size > 1)
	{
		table = NULL;
		table = malloc((*stack_a)->size * sizeof(int));
		fill_t(&table, stack_a);
		fake_sort(&table, (*stack_a)->size);
		i = table[(*stack_a)->size / 8];
		j = table[((*stack_a)->size /9)/2];
		sort_swap(stack_a, stack_b, i, j);
	}
	// sh_sort(stack_a, stack_b);
	fill_a(stack_a, stack_b);
	if(stack_b)
		pa(stack_a, stack_b);
}
