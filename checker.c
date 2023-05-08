/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouaarabe <ouaarabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 02:45:24 by ouaarabe          #+#    #+#             */
/*   Updated: 2023/05/08 06:59:34 by ouaarabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	instract(char *s, t_dlist **stack_a, t_dlist **stack_b)
{
	if (!ft_strncmp(s, "sa\n", 3))
		sa(stack_a, 0);
	else if (!ft_strncmp(s, "sb\n", 3))
		sb(stack_b, 0);
	else if (!ft_strncmp(s, "ss\n", 3))
		ss(stack_a, stack_b, 0);
	else if (!ft_strncmp(s, "ra\n", 3))
		ra(stack_a, 0);
	else if (!ft_strncmp(s, "rb\n", 3))
		rb(stack_b, 0);
	else if (!ft_strncmp(s, "rra\n", 4))
		rra(stack_a, 0);
	else if (!ft_strncmp(s, "rrb\n", 4))
		rrb(stack_b, 0);
	else if (!ft_strncmp(s, "rr\n", 3))
		rr(stack_a, stack_b, 0);
	else if (!ft_strncmp(s, "rrr\n", 4))
		rrr(stack_a, stack_b, 0);
	else if (!ft_strncmp(s, "pa\n", 3))
		pa(stack_a, stack_b, 0);
	else if (!ft_strncmp(s, "pb\n", 3))
		pb(stack_a, stack_b, 0);
	else
		ft_error();
}

int	check_sorted(t_dlist *stack_a)
{
	int	i;

	i = stack_a->size;
	while (--i)
	{	
		if (stack_a->head->data > stack_a->head->next->data)
			return (0);
		stack_a->head = stack_a->head->next;
	}
	return (1);
}

void	checkerr(t_dlist *s_a, t_dlist *s_b)
{
	char	*s;

	s = get_next_line(STDIN_FILENO);
	while (s)
	{
		instract(s, &s_a, &s_b);
		free (s);
		s = get_next_line(STDIN_FILENO);
	}
}

void	ferfer(t_dlist *stack_a, char **tmpss)
{
	t_dlist_item	*tmp;
	int				i;

	tmp = NULL;
	i = 0;
	while (stack_a->size--)
	{
		free(tmpss[i]);
		i++;
		tmp = stack_a->head;
		stack_a->head = stack_a->head->next;
		free(tmp);
	}
	free(tmpss);
	free(stack_a);
}

int	main(int argc, char **argv)
{
	t_dlist	*stack_a;
	t_dlist	*stack_b;
	char	**splitted;
	char	**tmpss;

	stack_a = NULL;
	stack_b = NULL;
	splitted = checker(argc, argv);
		tmpss = splitted;
	if (!splitted)
		return (1);
	while (splitted && *splitted)
	{
		new_node(&stack_a, ft_atoi(*splitted));
		splitted++;
	}
	checkerr(stack_a, stack_b);
	if (check_sorted(stack_a))
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 2);
	ferfer(stack_a, tmpss);
	return (0);
}
