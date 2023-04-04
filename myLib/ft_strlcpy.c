/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouaarabe <ouaarabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 07:41:46 by ouaarabe          #+#    #+#             */
/*   Updated: 2022/10/28 18:16:50 by ouaarabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	c;

	c = ft_strlen(src);
	if (size == 0)
		return (c);
	while (*src && --size)
	{
		*(dest++) = *(src++);
	}
		*dest = '\0';
	return (c);
}
