/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouaarabe <ouaarabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 22:10:59 by ouaarabe          #+#    #+#             */
/*   Updated: 2023/05/15 04:54:43 by ouaarabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
	char	**splitted;
	char	**tmpss;

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
	// size_t d = (stack_a)->size;
	// t_dlist_item *tmp = (stack_a)->head;
	// while(d--)
	// {
	// 	printf("{{%d}}\n", tmp->data);
	// 	tmp =  tmp->next;
	// }
	ferfer(stack_a, tmpss);
	return (0);
}
