/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leet <leet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 22:10:59 by ouaarabe          #+#    #+#             */
/*   Updated: 2023/05/04 03:31:04 by leet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void hh()
{
    
    system("leaks push_swap");
}

int main(int argc, char **argv)
{
    t_dlist *stack_a;
    char **splitted;
    char **tmpss;

    atexit(hh);

    stack_a = NULL;
    splitted = checker(argc, argv);
    tmpss = splitted;
    if (!splitted)
        return (1);
    while (splitted && *splitted)
    {
        new_node(&stack_a, ft_atoi(*splitted));
        splitted++;
    }
    which_sort (&stack_a);
    // while (stack_a->size--)
    // {
    //     printf ("%d\n", stack_a->head->data);
    //     stack_a->head = stack_a->head->next;
    // }
    // exit(0);
    t_dlist_item *tmp = NULL;
    int i = 0;
    while(stack_a->size--)
    {
        free(tmpss[i]);
        i++;
        tmp = stack_a->head;
        stack_a->head = stack_a->head->next;
        free(tmp);
    }
    free(tmpss);
    free(stack_a);
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
    