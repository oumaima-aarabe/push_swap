/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouaarabe <ouaarabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 22:10:59 by ouaarabe          #+#    #+#             */
/*   Updated: 2023/04/11 00:19:50 by ouaarabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

int main(int argc, char **argv)
{
    t_dlist *stack_a;
    t_dlist *stack_tmp;
    int i;
    char **splitted = NULL;
    

    splitted = checker(argc, argv);
    if (!splitted)
        return (1);
    while (splitted && *splitted)
    {
        new_node(stack_a, ft_atoi(*splitted));
        (*splitted)++;
    }
    stack_tmp = stack_a;
    i = stack_tmp->size;
    while (i--)
    {
        printf("%d\n", stack_tmp->head->data);
        stack_tmp->head = stack_tmp->head->next;
    }
    return (0);
}

    // while (splitted && *splitted)
    // {
    //     printf("[%s]\n", *splitted++);
    // }
    // stack_a->head->data = args[0];
    // t_dlist *a;
    // a = malloc(sizeof(t_dlist));
    // a->head = malloc(sizeof(t_dlist_item));
    // a->head->data = 99;

    // t_dlist_item *b;
    // b = malloc(sizeof(t_dlist_item));
    // b->data = 10;

    // a->head->next = b;
    // a->head->prev = b;
    // b->next = a->head;
    // b->prev  = a->head;
    // t_dlist_item *tmp;
    //     printf("%d\n", a->head->data);
    // printf("%d\n", (a->head)->next->data);
    // swap(a);
    // printf("%d\n", a->head->data);
    // printf("%d\n", (a->head)->next->data);
    