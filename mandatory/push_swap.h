/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouaarabe <ouaarabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 22:08:27 by ouaarabe          #+#    #+#             */
/*   Updated: 2023/04/10 22:50:35 by ouaarabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <stddef.h>
#include "../myLib/libft.h"

typedef struct s_dlist_item
{
    int data;
    struct s_dlist_item *next;
    struct s_dlist_item *prev;
}   t_dlist_item;

typedef struct s_dlist
{
    size_t size;
    t_dlist_item *head;
} t_dlist;

char **checker(int ac, char **av);

t_dlist_item *dlist_init(int data);


int dlist_pop_front(t_dlist *stack);

int dlist_push_front(t_dlist *list, t_dlist *list2);

int swap(t_dlist *stack);
int rotate_ttb(t_dlist *stack);

int rotate_btt(t_dlist *stack);

int duplicate(char **str);

int num_check(char **str);

int	is_sorted(char **str);

void	new_node(t_dlist *list, int nbr);
#endif
