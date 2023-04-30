/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instract.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouaarabe <ouaarabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 22:13:51 by ouaarabe          #+#    #+#             */
/*   Updated: 2023/04/30 23:10:05 by ouaarabe         ###   ########.fr       */
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
	if (dlist_push_front(stack_b, stack_a) == -1)
		return (-1);
	ft_putendl_fd("pb", 1);
	return (1);
}
