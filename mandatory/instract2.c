/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instract2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouaarabe <ouaarabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 02:40:12 by ouaarabe          #+#    #+#             */
/*   Updated: 2023/04/29 16:31:03 by ouaarabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int dlist_pop_front(t_dlist **stack)
{
    int             value;
   t_dlist_item  *temp;

    if(!(*stack))
        return (-1);
    value = (*stack)->head->data;
    if ((*stack)->size == 1)
    {
        free((*stack)->head);
        (*stack)->size--;
        (*stack)->head = NULL;
        return (value);
    }
    temp = (*stack)->head;
    (*stack)->head->prev->next = (*stack)->head->next;
    (*stack)->head->next->prev = (*stack)->head->prev;
    (*stack)->head = (*stack)->head->next;
    free(temp);
    (*stack)->size--;
    return (value); 
}

int dlist_push_front(t_dlist **list, t_dlist **list2)
{
    t_dlist_item *node;
    if (!(*list))
    {
        *list = malloc(sizeof(t_dlist));
        (*list)->head = dlist_init(dlist_pop_front(list2));
        (*list)->head->next = (*list)->head;
        (*list)->head->prev = (*list)->head;
        (*list)->size = 1;
        if(*list == NULL)
            return (-1);
    }
    else
    {
        node = dlist_init(dlist_pop_front(list2));
        node->prev = (*list)->head->prev;
        node->next = (*list)->head;
		(*list)->head->prev->next = node;
        (*list)->head->prev = node;
        (*list)->head = node;
        (*list)->size++;
    }
    return (1);
}

int swap(t_dlist **stack)
{
    int data;

    if (!(*stack))
        return (-1);
    data = (*stack)->head->data;
    (*stack)->head->data = ((*stack)->head)->next->data;
    ((*stack)->head)->next->data = data;
    return (1);
}
