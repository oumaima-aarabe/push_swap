/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instract.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouaarabe <ouaarabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 22:13:51 by ouaarabe          #+#    #+#             */
/*   Updated: 2023/04/19 10:49:33 by ouaarabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sa(t_dlist **stack)
{
	if (swap(stack) == -1)
		return (-1);
	ft_putendl_fd("sa", 1);
	return (1);
}

int	sb(t_dlist **stack)
{
	if (swap(stack) == -1)
		return (-1);
	ft_putendl_fd("sb", 1);
	return (1);
}

int	ss(t_dlist **stack_a, t_dlist **stack_b)
{
	if (swap(stack_a) == -1)
		return (-1);
	if (swap(stack_b) == -1)
		return (-1);
	ft_putendl_fd("ss", 1);
	return (1);
}

int	pa(t_dlist **stack_a, t_dlist **stack_b)
{
	if (dlist_push_front(stack_a, stack_b) == -1)
		return (-1);
	ft_putendl_fd("pa", 1);
	return (1);
}

int	pb(t_dlist **stack_a, t_dlist **stack_b)
{
	dlist_push_front(stack_b, stack_a);
	ft_putendl_fd("pb", 1);
	return (1);
}

int	ra(t_dlist **stack)
{
	if (rotate_ttb(stack) == -1)
		return (-1);
	ft_putendl_fd("ra", 1);
	return (1);
}

int	rb(t_dlist **stack)
{
	int z;
	t_dlist_item *temp;
	z = (*stack)->size;
		temp = (*stack)->head;
		while(z--)
		{
			printf("[[[[[%d]]]]]\n", temp->data);
			temp = temp->next;
		}
	if (rotate_ttb(stack) == -1)
		return (-1);
	ft_putendl_fd("rb", 1);
	z = (*stack)->size;
	temp = (*stack)->head;
	while(z--)
	{
		printf("{{{%d}}}\n", temp->data);
		temp = temp->next;
	}
	return (1);
}

int	rr(t_dlist **stack_a, t_dlist **stack_b)
{
	if (rotate_ttb(stack_a) == -1)
		return (-1);
	if (rotate_ttb(stack_b) == -1)
		return (-1);
	ft_putendl_fd("rr", 1);
	return (1);
}

int	rra(t_dlist **stack)
{
	if (rotate_btt(stack) == -1)
		return (-1);
	ft_putendl_fd("rra", 1);
	return (1);
}

int	rrb(t_dlist **stack)
{
	if (rotate_btt(stack) == -1)
		return (-1);
	ft_putendl_fd("rrb", 1);
	return (1);
}

int	rrr(t_dlist **stack_a, t_dlist **stack_b)
{
	if (rotate_btt(stack_a) == -1)
		return (-1);
	if (rotate_btt(stack_b) == -1)
		return (-1);
	ft_putendl_fd("rrr", 1);
	return (1);
}