/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   innstract1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouaarabe <ouaarabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 20:44:24 by ouaarabe          #+#    #+#             */
/*   Updated: 2023/05/08 06:39:29 by ouaarabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_dlist **stack, int m)
{
	if ((*stack)->size < 2)
		exit(1);
	(*stack)->head = (*stack)->head->next;
	if (m)
		ft_putendl_fd("ra", 1);
}

void	rb(t_dlist **stack, int m)
{
	if ((*stack)->size < 2)
		exit(1);
	(*stack)->head = (*stack)->head->next;
	if (m)
		ft_putendl_fd("rb", 1);
}

void	rr(t_dlist **stack_a, t_dlist **stack_b, int m)
{
	if (((*stack_a)->size < 2) || ((*stack_b)->size < 2))
		exit(1);
	(*stack_a)->head = (*stack_a)->head->next;
	(*stack_b)->head = (*stack_b)->head->next;
	if (m)
		ft_putendl_fd("rr", 1);
}

void	rra(t_dlist **stack, int m)
{
	if ((*stack)->size < 2)
		exit(1);
	(*stack)->head = (*stack)->head->prev;
	if (m)
		ft_putendl_fd("rra", 1);
}

void	rrb(t_dlist **stack, int m)
{
	if ((*stack)->size < 2)
		exit(1);
	(*stack)->head = (*stack)->head->prev;
	if (m)
		ft_putendl_fd("rrb", 1);
}
