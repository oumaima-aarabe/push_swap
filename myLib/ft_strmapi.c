/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouaarabe <ouaarabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 00:54:04 by ouaarabe          #+#    #+#             */
/*   Updated: 2022/11/01 19:04:38 by ouaarabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*sf;

	if (!s)
		return (NULL);
	sf = malloc (sizeof(char) * (ft_strlen(s)+ 1));
	if (!sf)
		return (NULL);
	i = 0;
	while (s[i])
	{
		sf[i] = f(i, s[i]);
		i++;
	}
	sf[i] = '\0';
	return (sf);
}
