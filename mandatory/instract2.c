/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instract2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouaarabe <ouaarabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 02:40:12 by ouaarabe          #+#    #+#             */
/*   Updated: 2023/04/04 02:45:28 by ouaarabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void *dlist_pop_front(struct dlist *stack)
{
    int             value;
    struct dlist    *temp;
    
    if(!stack)
        return (-1);    
    temp = stack->head;
    value = temp->head->data;
    stack->head = stack->head->next;
    free(temp);
    return (value); 
}

int dlist_push_front(struct dlist *list, int dlist_pop_front(struct dlist *stack))
{
	if (list)
	{
        struct dlist_item *node;
        node = malloc(sizeof(struct dlist_item));
        if(node == NULL)
            return (-1);
        list->head->prev = node;
        node->data = &dlist_pop_front;
        node->prev = NULL;
        node->next = list->head;
        return (1);
	}
    return (-1);
}

int swap(struct dlist *stack)
{
    int data;
    if (!stack)
        return (-1);
    data = stack->head->data;
    stack->head->data = (stack->head->next)->data;
    (stack->head->next)->data = data;
    return (1);
}

int rotate_ttb(struct dlist *stack)
{
    int data;
    struct dlist_item *node;
   
    if (!stack)
        return (-1);
    data = dlist_pop_front(stack);
    node = malloc(sizeof(struct dlist_item));
    if(node == NULL)
        return (-1);
    stack->tail->next = node;
    node->data = data;
    node->next = NULL;
    node->prev = stack->tail;
    return (1);
}

void *dlist_pop_back(struct dlist *stack)
{
    int             value;
    struct dlist    *temp;
    
    if(!stack)
        return (-1);    
    temp = stack->tail;
    value = temp->tail->data;
    stack->tail = stack->tail->prev;
    stack->tail->next = NULL;
    free(temp);
    return (value); 
}

int rotate_btt(struct dlist *stack)
{
    int data;
    struct dlist_item *node;

    if (!stack)
        return (-1);
    node = malloc(sizeof(struct dlist_item));
    if(node == NULL)
        return (-1);
    data = dlist_pop_back(stack);
    stack->head->prev = node;
    node->data = data;
    node->prev = NULL;
    node->next = stack->head;
    return (1); 
}