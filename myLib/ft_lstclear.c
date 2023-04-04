/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouaarabe <ouaarabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 00:19:34 by ouaarabe          #+#    #+#             */
/*   Updated: 2022/11/04 08:52:17 by ouaarabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{	
	t_list	*tmp;
	t_list	*tmp1;

	if (!(*lst) ||!lst || !del)
		return ;
	tmp1 = *lst;
	while (*lst)
	{	
		tmp = (*lst);
		*lst = (*lst)->next;
		del(tmp->content);
		free (tmp);
	}
	tmp1 = NULL;
}
