/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouaarabe <ouaarabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 22:13:58 by ouaarabe          #+#    #+#             */
/*   Updated: 2023/04/07 23:28:56 by ouaarabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_dlist *dlist_init(int data)
{
   t_dlist *d;

    d->head = (t_dlist_item *) malloc(sizeof(t_dlist_item));
    if(d->head == NULL)
        return NULL;
    d->head->next = NULL;
    d->head->prev = NULL;
    d->head->data = data;
    return (d);
}
