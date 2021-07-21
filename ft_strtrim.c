/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 10:52:03 by rcheiko           #+#    #+#             */
/*   Updated: 2021/01/28 11:04:54 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		check_charset(char c, char const *set)
{
	int		i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		size;
	char	*start;
	char	*end;
	char	*str;

	i = 0;
	if (!s1 || !set)
		return (0);
	while (s1[i] && check_charset(s1[i], set))
		i++;
	start = (char *)&s1[i];
	if ((i = ft_strlen(s1) - 1) >= 0)
		while (i >= 0 && check_charset(s1[i], set))
			i--;
	end = (char *)&s1[i];
	if (!*s1 || ft_strlen(start) == ft_strlen(end))
		size = 2;
	else
		size = end - start + 2;
	if (!(str = malloc(sizeof(char) * size)))
		return (NULL);
	ft_strlcpy(str, start, size);
	return (str);
}
