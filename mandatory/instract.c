/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instract.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouaarabe <ouaarabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 22:13:51 by ouaarabe          #+#    #+#             */
/*   Updated: 2023/04/04 02:45:18 by ouaarabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int sa(struct dlist *stack)
{
    if (swap(stack) == -1)
        return (-1);
    ft_putendl_fd ("sa", 1);
}

int sb(struct dlist *stack)
{
    if (swap(stack) == -1)
        return (-1);
    ft_putendl_fd ("sb", 1);
}

int ss(struct dlist *stack_a, struct dlist *stack_b)
{
    if (swap(stack_a) == -1)
        return (-1);
    if (swap(stack_b) == -1)
        return (-1);
    ft_putendl_fd ("ss", 1);
}

int pa(struct dlist *stack_a,struct dlist *stack_b)
{
    if(dlist_push_front(stack_a,dlist_pop_front(stack_b)) == -1)
        return (-1);
    ft_putendl_fd("pa", 1);
    return (1);
}

int pb(struct dlist *stack_a,struct dlist *stack_b)
{
    if(dlist_push_front(stack_b,dlist_pop_front(stack_a)) == -1)
        return (-1);
    ft_putendl_fd("pb", 1);
    return (1);
}

int ra(struct dlist *stack)
{
    if (rotate_ttb(stack) == -1)
        return (-1);
    ft_putendl_fd ("ra", 1);
}

int rb(struct dlist *stack)
{
    if (rotate_ttb(stack) == -1)
        return (-1);
    ft_putendl_fd ("rb", 1);
}

int rr(struct dlist *stack_a, struct dlist *stack_b)
{
    if (rotate_ttb(stack_a) == -1)
        return (-1);
    if (rotate_ttb(stack_b) == -1)
        return (-1);
    ft_putendl_fd ("rr", 1);
}

int rra(struct dlist *stack)
{
    if (rotate_ttb(stack) == -1)
        return (-1);
    ft_putendl_fd ("rra", 1);
}

int rrb(struct dlist *stack)
{
    if (rotate_btt(stack) == -1)
        return (-1);
    ft_putendl_fd ("rrb", 1);
}

int rrr(struct dlist *stack_a, struct dlist *stack_b)
{
    if (rotate_btt(stack_a) == -1)
        return (-1);
    if (rotate_btt(stack_b) == -1)
        return (-1);
    ft_putendl_fd ("rrr", 1);
}