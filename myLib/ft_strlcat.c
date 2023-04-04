/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouaarabe <ouaarabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 21:52:56 by ouaarabe          #+#    #+#             */
/*   Updated: 2022/11/07 22:41:04 by ouaarabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	ds;
	size_t	ss;

	i = 0;
	j = 0;
	if (size)
	{
		ds = ft_strlen(dest);
		ss = ft_strlen(src);
		if (size <= ds)
			return (size + ss);
		j = size - ds - 1;
		while (src[i] && i < j)
		{
			dest[ds + i] = src[i];
			i++;
		}
		dest[ds + i] = '\0';
		return (ds + ss);
	}
	return (ft_strlen(src));
}
