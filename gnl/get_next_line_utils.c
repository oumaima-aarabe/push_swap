/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouaarabe <ouaarabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 03:05:50 by ouaarabe          #+#    #+#             */
/*   Updated: 2022/11/24 23:25:54 by ouaarabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"get_next_line.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*memory;
	size_t	i;

	i = 0;
	memory = malloc(count * size);
	if (!memory)
		return (NULL);
	while (i < count * size)
		memory[i++] = 0;
	return (memory);
}

size_t	ft_strlen(char *s)
{
	const char	*c;

	if (!s)
		return (0);
	c = s;
	while (*c)
		c++;
	return ((size_t)(c - s));
}

char	*ft_strdup(char *s1)
{
	size_t	len;
	char	*dup;
	char	*assl;
	size_t	i;

	if (!s1)
		return (0);
	len = ft_strlen(s1);
	assl = (char *)s1;
	i = 0;
	dup = (char *)ft_calloc(sizeof(*s1), (len + 1));
	if (!dup)
		return (NULL);
	while (i < len)
	{
		dup[i] = assl[i];
		i++;
	}
	return (dup);
}

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	ls1;
	size_t	ls2;
	char	*result;
	ssize_t	i;
	ssize_t	j;

	i = -1;
	j = -1;
	if (!s1)
		s1 = ft_strdup("");
	if (!s1 || !s2)
		return (NULL);
	ls1 = ft_strlen(s1);
	ls2 = ft_strlen(s2);
	result = ft_calloc((ls1 + ls2 + 1), sizeof(char));
	if (result == NULL)
		return (NULL);
	while (s1[++i])
			result[i] = s1[i];
	while (s2[++j])
		result[i + j] = s2[j];
	free(s1);
	s1 = NULL;
	return (result);
}

char	*ft_strchr(char *str, int c)
{
	size_t	len;
	size_t	i;

	if (!str)
		return (0);
	len = ft_strlen(str);
	i = 0;
	while (i < len)
	{
		if (str[i] == (unsigned char)c)
			return (&str[i]);
		i++;
	}
	return (0);
}
