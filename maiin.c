/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maiin.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouaarabe <ouaarabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 21:19:59 by ouaarabe          #+#    #+#             */
/*   Updated: 2023/04/14 21:56:29 by ouaarabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mandatory/push_swap.h"


void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	write (fd, s, strlen(s));
	write (fd, "\n", 1);
}

int main(int argc, char **argv)
{
    t_dlist *stack_a = NULL;
    t_dlist *stack_b = NULL;

    new_node(&stack_a, 6);
    new_node(&stack_a, -63);
    new_node(&stack_a, 8);
    int i = 0;
     while (i++ < stack_a->size)
    {
        printf ("%d\n", stack_a->head->data);
        stack_a->head = stack_a->head->next;
    }
    
   dlist_push_front(&stack_b, stack_a);
   dlist_push_front(&stack_b, stack_a);
   printf("s : %d\n", stack_b->size);
  i = 0;
     while (i++ < stack_b->size)
     {
        printf ("[%d]\n", stack_b->head->data);
        stack_b->head = stack_b->head->next;
    }
      i = 0;
     while (i++ < stack_a->size)
    {
        printf ("{%d}\n", stack_a->head->data);
        stack_a->head = stack_a->head->next;
    }
    
    return (0);
}