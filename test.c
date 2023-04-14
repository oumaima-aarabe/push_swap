/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouaarabe <ouaarabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 01:34:47 by ouaarabe          #+#    #+#             */
/*   Updated: 2023/04/14 21:56:03 by ouaarabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mandatory/push_swap.h"

t_dlist_item *dlist_init(int data)
{
   t_dlist_item *d;

    d = (t_dlist_item *) malloc(sizeof(t_dlist_item));
    if(d == NULL)
        return NULL;
    d->next = NULL;
    d->prev = NULL;
    d->data = data;
    return (d);
}

void	new_node(t_dlist **list, int nbr)
{
	t_dlist_item	*new;
    
    new = dlist_init(nbr);
    if (!(*list))
    {
		*list  = (t_dlist *)malloc(sizeof(t_dlist));
        (*list)->head = new; 
        new->next = new;
        new->prev = new;
        (*list)->size = 1;
    }
	else
	{
		new->next = (*list)->head;
		new->prev = (*list)->head->prev;
		((*list)->head->prev)->next = new;
		(*list)->head->prev = new;
		(*list)->size++;
	}
}

int dlist_pop_front(t_dlist *stack)
{
    int             value;
   t_dlist_item  *temp;
    
    if(!stack)
        return (-1);    
    temp = stack->head;
    value = temp->data;
    stack->head = stack->head->next;
    free(temp);
    stack->size--;
    return (value); 
}

int dlist_push_front(t_dlist **list, t_dlist *list2)
{
    t_dlist_item *node;
    if (!(*list))
    {
        new_node(list, dlist_pop_front(list2));
        if(*list == NULL)
            return (-1);
    }
    else
    {
        node = dlist_init(dlist_pop_front(list2));
        node->prev = (*list)->head->prev;
        node->next = (*list)->head;
        ((*list)->head->prev)->next = node;
        (*list)->head->prev = node;
        (*list)->head = node;
        (*list)->size++;
    }
    return (1);

}

int pb(t_dlist *stack_a,t_dlist *stack_b)
{

    if(dlist_push_front(&stack_b, stack_a) == -1)
        return (-1);
    ft_putendl_fd("pb", 1);
    return (1);
}
