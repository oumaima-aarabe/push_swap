/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouaarabe <ouaarabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 22:10:59 by ouaarabe          #+#    #+#             */
/*   Updated: 2023/04/10 01:27:37 by ouaarabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

int main(int argc, char **argv)
{
    struct dlist *stack_a;
    char **splitted = NULL;

    splitted = checker(argc, argv);
    if (!splitted)
        return (1);

    // while (splitted && *splitted)
    // {
    //     printf("[%s]\n", *splitted++);
    // }
    return (0);
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