/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouaarabe <ouaarabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 01:41:52 by ouaarabe          #+#    #+#             */
/*   Updated: 2022/10/29 04:11:53 by ouaarabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*dup;
	char	*assl;
	size_t	i;

	len = ft_strlen(s1);
	assl = (char *)s1;
	i = 0;
	dup = (char *)malloc(sizeof(*s1) * (len + 1));
	if (!dup)
		return (NULL);
	while (i < len)
	{
		dup[i] = assl[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
