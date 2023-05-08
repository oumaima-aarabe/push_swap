/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instract.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouaarabe <ouaarabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 22:13:51 by ouaarabe          #+#    #+#             */
/*   Updated: 2023/05/08 06:45:23 by ouaarabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_dlist **stack, int m)
{
	swap(stack);
	if (m)
		ft_putendl_fd("sa", 1);
}

void	sb(t_dlist **stack, int m)
{
	swap(stack);
	if (m)
		ft_putendl_fd("sb", 1);
}

void	ss(t_dlist **stack_a, t_dlist **stack_b, int m)
{
	swap(stack_a);
	swap(stack_b);
	if (m)
		ft_putendl_fd("ss", 1);
}

void	pa(t_dlist **stack_a, t_dlist **stack_b, int m)
{
	dlist_push_front(stack_a, stack_b);
	if (m)
		ft_putendl_fd("pa", 1);
}

void	pb(t_dlist **stack_a, t_dlist **stack_b, int m)
{
	dlist_push_front(stack_b, stack_a);
	if (m)
		ft_putendl_fd("pb", 1);
}
