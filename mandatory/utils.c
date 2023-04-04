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

int dlist_insert_at(struct dlist *list, int element)
{
   struct dlist *tmp;
    size_t i;

    i = 0;
    tmp = NULL;
    if (!list)
        return (-1);
    tmp = (struct dlist *)list;
    while (i <= index)
    {
        tmp->head = tmp->head->next;
        i++;
    }
    tmp->head->data = element;
    return (1);
}

int dlist_push_front(struct dlist *list, int element)
{
	if (list)
	{
        struct dlist_item *node;
        node = malloc(sizeof(struct dlist_item));
        if(node == NULL)
            return (-1);
        list->head->prev = node;
        node->data = element;
        node->prev = NULL;
        node->next = list->head;
        return (1);
	}
    return (-1);
}

int dlist_push_back(struct dlist *list, int element)
{
    	if (list)
	{
        struct dlist_item *node;
        node = malloc(sizeof(struct dlist_item));
        if(node == NULL)
            return (-1);
        list->tail->next = node;
        node->data = element;
        node->next = NULL;
        return (1);
	}
    return (-1);
}
