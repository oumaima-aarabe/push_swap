/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instract.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouaarabe <ouaarabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 22:13:51 by ouaarabe          #+#    #+#             */
/*   Updated: 2023/05/08 05:21:03 by ouaarabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"


int	ss(t_dlist **stack_a, t_dlist **stack_b)
{
	if (swap(stack_a) == -1)
		return (-1);
	if (swap(stack_b) == -1)
		return (-1);
	return (1);
}

