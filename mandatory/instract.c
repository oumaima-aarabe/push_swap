/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instract.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbrahm <aelbrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 22:13:51 by ouaarabe          #+#    #+#             */
/*   Updated: 2023/04/25 14:51:23 by aelbrahm         ###   ########.fr       */
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
	// int z = (*stack_a)->size;
	// t_dlist_item *tmp = (*stack_a)->head;
	// while(z--)
	// {
	// 	printf("{a before : %d}\n", tmp->data);
	// 	tmp = tmp->next;
	// }
	// if (*stack_b)
	// {
 	// 	z = (*stack_b)->size;
	// 	tmp = (*stack_b)->head;
	// 	while(z--)
	// 	{
	// 		printf("[b before: %d]\n", tmp->data);
	// 		tmp = tmp->next;
	// 	}
	// }
	//before
	dlist_push_front(stack_b, stack_a);
	ft_putendl_fd("pb", 1);
	//after
	// z = (*stack_a)->size;
	// tmp = (*stack_a)->head;
	// while(z--)
	// {
	// 	printf("{a after: %d}\n", tmp->data);
	// 	tmp = tmp->next;
	// }
 	// z = (*stack_b)->size;
	// tmp = (*stack_b)->head;
	// while(z--)
	// {
	// 	printf("[b after: %d]\n", tmp->data);
	// 	tmp = tmp->next;
	// }
	return (1);
}

int	ra(t_dlist **stack)
{
	if((*stack)->size == 2)
		return(sa(stack));
	if (rotate_ttb(stack) == -1)
		return (-1);
	ft_putendl_fd("ra", 1);
	return (1);
}

int	rb(t_dlist **stack)
{
	// if((*stack)->size == 2)
	// 	return(sb(stack));
	//         t_dlist_item *a;
    //   a = (*stack)->head;
    // while (a)
    // {
    //     printf("%d  -->\n", a->data);
    //     a = a->next;
    //     if (a == (*stack)->head)
    //         break ;
    // }
    // printf("-----\n");
	// int i = 0;
	// while (i++ < (*stack)->size + 1)
	// {
	// 	printf("%d --->\n", (*stack)->head->data);
	// 	(*stack)->head = (*stack)->head->next;
	// }
      if (!(*stack))
        return (-1);
    (*stack)->head = (*stack)->head->next;
    return (1);
	// if (rotate_ttb(stack) == -1)
	// 	return (-1);
	ft_putendl_fd("rb", 1);
	// return (1);

    //   a = (*stack)->head;
    // while (a)
    // {
    //     printf("%d  -->\n", a->data);
    //     a = a->next;
    //     if (a == (*stack)->head)
    //         break ;
    // }
    // exit(1);
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
	// if((*stack)->size == 2)
	// 	return(sa(stack));
	if (rotate_btt(stack) == -1)
		return (-1);
	ft_putendl_fd("rra", 1);
	return (1);
}

int	rrb(t_dlist **stack)
{
	// if((*stack)->size == 2)
	// 	return(sb(stack));
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