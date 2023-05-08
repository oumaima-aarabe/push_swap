/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouaarabe <ouaarabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 22:08:27 by ouaarabe          #+#    #+#             */
/*   Updated: 2023/05/08 05:22:24 by ouaarabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <stddef.h>
# include "../myLib/libft.h"
# include "../gnl/get_next_line.h"

typedef struct s_dlist_item
{
	int					data;
	struct s_dlist_item	*next;
	struct s_dlist_item	*prev;
}t_dlist_item;

typedef struct s_dlist
{
	size_t			size;
	t_dlist_item	*head;
}t_dlist;

t_dlist_item	*dlist_init(int data);
char			**checker(int ac, char **av);
int				dlist_pop_front(t_dlist **stack);
int				dlist_push_front(t_dlist **list, t_dlist **list2);
int				duplicate(char **str);
int				num_check(char **str);
int				is_sorted(char **str);
int				min_pos(t_dlist **dlist);
int				max_pos(t_dlist **dlist);
int				swap(t_dlist **stack);
int				rb(t_dlist **stack);
int				ra(t_dlist **stack);
int				rra(t_dlist **stack);
int				rrb(t_dlist **stack);
int				rr(t_dlist **stack_a, t_dlist **stack_b);
int				rrr(t_dlist **stack_a, t_dlist **stack_b);
int				ss(t_dlist **stack_a, t_dlist **stack_b);
void			new_node(t_dlist **list, int nbr);
int				sorted(t_dlist **list);


void	ferfer(t_dlist *stack_a, char **tmpss);
void	checkerr(t_dlist *s_a, t_dlist *s_b);
int	check_sorted(t_dlist *stack_a);
void	instract(char *s, t_dlist **stack_a, t_dlist **stack_b);



#endif
