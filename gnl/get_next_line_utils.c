/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouaarabe <ouaarabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 03:05:50 by ouaarabe          #+#    #+#             */
/*   Updated: 2023/05/07 01:21:09 by ouaarabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"get_next_line.h"
#include <stdio.h>

// void	*malloc(size_t count, size_t size)
// {
// 	char	*memory;
// 	size_t	i;

// 	i = 0;
// 	memory = malloc(count * size);
// 	if (!memory)
// 		return (NULL);
// 	while (i < count * size)
// 		memory[i++] = 0;
// 	return (memory);
// }


char	*ft_strjoiin(char *left_str, char *buff)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!left_str)
	{
		left_str = (char *)malloc(1 * sizeof(char));
		left_str[0] = '\0';
	}
	if (!left_str || !buff)
		return (NULL);
	str = malloc(sizeof(char) * ((ft_strlen(left_str) + ft_strlen(buff)) + 1));
	if (str == NULL)
		return (NULL);
	i = -1;
	j = 0;
	if (left_str)
		while (left_str[++i] != '\0')
			str[i] = left_str[i];
	while (buff[j] != '\0')
		str[i++] = buff[j++];
	str[ft_strlen(left_str) + ft_strlen(buff)] = '\0';
	free(left_str);
	return (str);
}

char	*ft_strchrr(char *str, int c)
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

// size_t	ft_strlen(char *s)
// {
// 	const char	*c;

// 	if (!s)
// 		return (0);
// 	c = s;
// 	while (*c)
// 		c++;
// 	return ((size_t)(c - s));
// }

// char	*ft_strdup(char *s1)
// {
// 	size_t	len;
// 	char	*dup;
// 	char	*assl;
// 	size_t	i;

// 	if (!s1)
// 		return (0);
// 	len = ft_strlen(s1);
// 	assl = (char *)s1;
// 	i = 0;
// 	dup = (char *)ft_calloc(sizeof(*s1), (len + 1));
// 	if (!dup)
// 		return (NULL);
// 	while (i < len)
// 	{
// 		dup[i] = assl[i];
// 		i++;
// 	}
// 	return (dup);
// }