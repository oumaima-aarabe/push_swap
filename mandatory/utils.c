/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouaarabe <ouaarabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 22:13:58 by ouaarabe          #+#    #+#             */
/*   Updated: 2023/04/12 04:19:40 by ouaarabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

int min_pos(t_dlist *dlist)
{
    int pos_min;
    t_dlist *temp;
    int min;
    int i;
    
    pos_min = 1;
    temp = dlist;
    min = temp->head->data;
    i = 1;
        
    while (i <= temp->size)
    {
        if (temp->head->data < min)
        {
            min = temp->head->data;
            pos_min = i;
        }
        temp->head = temp->head->next;
        i++;;
    }
    return pos_min;
}

int max_pos(t_dlist *dlist)
{
    int pos_max;
    t_dlist *temp;
    int i;
    int max;

    pos_max = 1;
    i = 1;
    temp = dlist;
    max = temp->head->data;
        
    while (i <= temp->size)
    {
        if (temp->head->data > max)
        {
            max = temp->head->data;
            pos_max = i;
        }
        temp->head = temp->head->next;
        i++;;
    }
    return pos_max;
}
