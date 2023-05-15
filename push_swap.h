/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouaarabe <ouaarabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 22:08:27 by ouaarabe          #+#    #+#             */
/*   Updated: 2023/05/15 06:14:35 by ouaarabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <stddef.h>
# include "myLib/libft.h"
# include "gnl/get_next_line.h"

typedef struct s_dlist_item
{
	int					data;
	struct s_dlist_item	*next;
	struct s_dlist_item	*prev;
}				t_dlist_item;

typedef struct s_dlist
{
	size_t			size;
	t_dlist_item	*head;
}				t_dlist;

t_dlist_item	*dlist_init(int data);
char			**checker(int ac, char **av);
int				dlist_pop_front(t_dlist **stack);
void			dlist_push_front(t_dlist **list, t_dlist **list2);
int				duplicate(char **str);
int				num_check(char **str);
int				is_sorted(char **str);
int				min_pos(t_dlist **dlist);
int				max_pos(t_dlist **dlist);
void			swap(t_dlist **stack);
void			sa(t_dlist **stack, int m);
void			sb(t_dlist **stack, int m);
void			rb(t_dlist **stack, int m);
void			ra(t_dlist **stack, int m);
void			rra(t_dlist **stack, int m);
void			rrb(t_dlist **stack, int m);
void			rr(t_dlist **stack_a, t_dlist **stack_b, int m);
void			rrr(t_dlist **stack_a, t_dlist **stack_b, int m);
void			ss(t_dlist **stack_a, t_dlist **stack_b, int m);
void			pa(t_dlist **stack_a, t_dlist **stack_b, int m);
void			pb(t_dlist **stack_a, t_dlist **stack_b, int m);
void			new_node(t_dlist **list, int nbr);
void			which_sort(t_dlist **stack_a);
void			sh_sort(t_dlist **stack_a, t_dlist **stack_b);
void			lg_sort(t_dlist **stack_a, t_dlist **stack_b);
void			_3sort(t_dlist **stack_a);
void			bubble_sort(int **array, int length);
void			sort_swap(t_dlist **stack_a, t_dlist **stack_b, int i, int j);
void			fill_a(t_dlist **stack_a, t_dlist **stack_b);
void			fill_t(int **table, t_dlist **list);
void			lg_sort(t_dlist **stack_a, t_dlist **stack_b);
int				mostly_rsorted(t_dlist **list, int *pos);
void			minimize(t_dlist **stack_a, t_dlist **stack_b);
int				sorted(t_dlist **list);
void			ferfer(t_dlist *stack_a, char **tmpss);
void			checkerr(t_dlist *s_a, t_dlist *s_b);
int				check_sorted(t_dlist *stack_a);
void			instract(char *s, t_dlist **stack_a, t_dlist **stack_b);
void			ft_error(void);
int				max_prev_pos(t_dlist **dlist);
void			r_max(t_dlist **stack_a, t_dlist **stack_b);
void			r_prev(t_dlist **stack_a, t_dlist **stack_b);
void			best_r(t_dlist **stack_b, size_t *lim, size_t *him);
#endif
