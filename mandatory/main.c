/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouaarabe <ouaarabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 22:10:59 by ouaarabe          #+#    #+#             */
/*   Updated: 2023/04/08 03:33:52 by ouaarabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

int main(int argc, char **argv)
{
    struct dlist *stack_a;
    char **args;

    stack_a = dlist_init();
    args = (char **)malloc(sizeof(char *) * argc);
    if (!args)
        return -1;
    args = checker(argc, argv);
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
}