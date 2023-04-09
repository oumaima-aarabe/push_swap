/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouaarabe <ouaarabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 22:13:58 by ouaarabe          #+#    #+#             */
/*   Updated: 2023/04/09 00:36:54 by ouaarabe         ###   ########.fr       */
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
