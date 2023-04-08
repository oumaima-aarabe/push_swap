/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouaarabe <ouaarabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 22:08:27 by ouaarabe          #+#    #+#             */
/*   Updated: 2023/04/08 03:24:47 by ouaarabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
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


#endif
