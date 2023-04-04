/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouaarabe <ouaarabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 03:08:17 by ouaarabe          #+#    #+#             */
/*   Updated: 2022/11/04 08:56:15 by ouaarabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*srcc;
	char	*dstt;

	srcc = (char *)src;
	dstt = (char *)dst;
	if (!src && !dst)
		return (NULL);
	if (src >= dst)
		return (ft_memcpy(dst, src, len));
	else
	{
		while (len--)
			dstt[len] = srcc[len];
	}
	return (dst);
}
