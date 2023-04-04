/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouaarabe <ouaarabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 02:18:01 by ouaarabe          #+#    #+#             */
/*   Updated: 2022/11/04 08:56:04 by ouaarabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*srcc;
	char	*dstt;

	srcc = (char *)src;
	dstt = (char *)dst;
	if (!src && !dst)
		return (NULL);
	if (dst == src)
		return (dst);
	while (n)
	{
		*(dstt++) = *(srcc++);
		n--;
	}
	return (dst);
}
