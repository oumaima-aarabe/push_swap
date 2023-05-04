/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_lg.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leet <leet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 06:03:32 by ouaarabe          #+#    #+#             */
/*   Updated: 2023/05/04 01:38:19 by leet             ###   ########.fr       */
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

void bubble_sort(int **array, int length)
{
    int temp;
    int i = 0;
	int j = 0;
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
	int mx_pos;
	int max_cont;
	int i;

	i = 0;
	while((*stack_b) && (*stack_b)->size > 1)
	{
		mx_pos = max_pos(stack_b);
		while (mx_pos != 1)
		{
			if (mx_pos <= (*stack_b)->size / 2)
					rb(stack_b);
			else if (mx_pos > (*stack_b)->size / 2)
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

	while ((*stack_a)->size > 1)
	{
		table = NULL;
		table = malloc((*stack_a)->size * sizeof(int));
		fill_t(&table, stack_a);
		bubble_sort(&table, (*stack_a)->size);
		i = table[(*stack_a)->size / 8];
		j = table[((*stack_a)->size /9)/2];
		free(table);
		sort_swap(stack_a, stack_b, i, j);
	}
	// sh_sort(stack_a, stack_b);
	fill_a(stack_a, stack_b);
	if(stack_b)
		pa(stack_a, stack_b);
}
