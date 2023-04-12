/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouaarabe <ouaarabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 02:57:53 by ouaarabe          #+#    #+#             */
/*   Updated: 2023/04/12 04:36:15 by ouaarabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void _3sort(t_dlist *stack_a)
{
    if (min_pos(stack_a) == 2 && max_pos(stack_a) == 1)
        ra(stack_a);
    else if (min_pos(stack_a) == 3 && max_pos(stack_a) == 2)
        rra(stack_a);
    else if ((max_pos(stack_a) - min_pos(stack_a)) != 2)
    {
        sa(stack_a);
        _3sort(stack_a);
    }    
}

void sh_sort(t_dlist *stack_a)
{
    if (stack_a->size == 2)
        sa(stack_a);
    else if (stack_a->size == 3)
        _3sort(stack_a);
    // else
    // {
    //     while (stack_a->size > 3)
    //     {
            
    //     }
    // }
}

void lg_sort(t_dlist *stack_a)
{
    return;
}
void which_sort(t_dlist *stack_a)
{
    if (!stack_a)
        return;
    if (stack_a->size < 7)
        sh_sort(stack_a);
    else
        lg_sort(stack_a);
}