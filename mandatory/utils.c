/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouaarabe <ouaarabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 22:13:58 by ouaarabe          #+#    #+#             */
/*   Updated: 2023/04/04 00:06:03 by ouaarabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

struct dlist *dlist_init(void)
{
    struct dlist *d;

    d = (struct dlist *) malloc(sizeof(struct dlist));
    if(d == NULL)
        return NULL;
    d->head = NULL;
    d->tail = NULL;
    d->size = 0;
    return (d);
}
