/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   innstract1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouaarabe <ouaarabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 20:44:24 by ouaarabe          #+#    #+#             */
/*   Updated: 2023/05/04 23:05:58 by ouaarabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ra(t_dlist **stack)
{
	if ((*stack)->size < 2)
		return (-1);
	(*stack)->head = (*stack)->head->next;
	ft_putendl_fd("ra", 1);
	return (1);
}

int	rb(t_dlist **stack)
{
	if ((*stack)->size < 2)
		return (-1);
	(*stack)->head = (*stack)->head->next;
	ft_putendl_fd("rb", 1);
	return (1);
}

int	rr(t_dlist **stack_a, t_dlist **stack_b)
{
	if (((*stack_a)->size < 2) || ((*stack_b)->size < 2))
		return (-1);
	(*stack_a)->head = (*stack_a)->head->next;
	(*stack_b)->head = (*stack_b)->head->next;
	ft_putendl_fd("rr", 1);
	return (1);
}

int	rra(t_dlist **stack)
{
	if ((*stack)->size < 2)
		return (-1);
	(*stack)->head = (*stack)->head->prev;
	ft_putendl_fd("rra", 1);
	return (1);
}

int	rrb(t_dlist **stack)
{
	if ((*stack)->size < 2)
		return (-1);
	(*stack)->head = (*stack)->head->prev;
	ft_putendl_fd("rrb", 1);
	return (1);
}
