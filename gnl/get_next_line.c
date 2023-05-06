/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouaarabe <ouaarabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 19:55:41 by ouaarabe          #+#    #+#             */
/*   Updated: 2022/11/24 21:41:48 by ouaarabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_stat(char *s)
{
	char	*tmp;
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	k = 0;
	j = ft_strlen(s) - i + 1;
	while (s[i] && s[i] != '\n')
		i++;
	if (s[i] && s[i] == '\n')
		i++;
	tmp = ft_calloc(j, sizeof(char));
	if (!tmp)
		return (NULL);
	while (j--)
	{
		tmp[k] = s[i];
		i++;
		k++;
	}
	return (free(s), s = NULL, tmp);
}

char	*ft_line(char *s)
{
	char	*line;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s[i])
		return (NULL);
	while (s[i] && s[i] != '\n')
		i++;
	if (s[i] && s[i] == '\n')
		i++;
	line = ft_calloc(i + 1, sizeof(char));
	if (!line)
		return (NULL);
	while (i > j)
	{
		line[j] = s[j];
		j++;
	}
	return (line);
}

char	*get_line(int fd, char *s)
{
	int		nbyte;
	char	*buff;

	buff = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	if (!buff)
		return (NULL);
	nbyte = 1;
	while (!ft_strchr(s, '\n') && nbyte != 0)
	{
		nbyte = read(fd, buff, BUFFER_SIZE);
		if (nbyte == -1)
			return (free (buff), NULL);
		buff[nbyte] = '\0';
		s = ft_strjoin(s, buff);
	}
	free(buff);
	buff = NULL;
	return (s);
}

char	*get_next_line(int fd)
{
	char		*line ;
	static char	*s;

	line = NULL;
	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	s = get_line(fd, s);
	if (!s)
		return (NULL);
	line = ft_line(s);
	if (!line)
	{
		free(s);
		s = NULL;
		return (NULL);
	}
	s = ft_stat(s);
	return (line);
}
