/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouaarabe <ouaarabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 23:51:20 by ouaarabe          #+#    #+#             */
/*   Updated: 2022/11/01 19:05:07 by ouaarabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*hs;
	char	*ndl;
	size_t	i;
	size_t	j;

	hs = (char *)haystack;
	ndl = (char *)needle;
	i = -1;
	if ((hs == ndl && len < ft_strlen(hs)) || (((!hs || !ndl) && len == 0)))
		return (NULL);
	if (ndl[0] == '\0')
		return (hs);
	while (hs[++i] && i < len)
	{
		j = 0;
		if (hs[i + j] == ndl[j])
		{
			while (hs[i + j] == ndl[j] && (i + j) < len)
			{
				if (ndl[++j] == '\0')
					return (hs + i);
			}
		}
	}
	return (NULL);
}
