/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouaarabe <ouaarabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 21:39:30 by ouaarabe          #+#    #+#             */
/*   Updated: 2022/11/11 08:16:17 by ouaarabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*dep;

	dep = (char *)s;
	while (*dep)
		dep++;
	while (*dep != (char)c)
	{
		if (dep == s)
			return (NULL);
		dep--;
	}
	return (dep);
}
