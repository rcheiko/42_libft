/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 11:17:22 by rcheiko           #+#    #+#             */
/*   Updated: 2021/01/22 10:37:14 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*retour;
	unsigned int	i;

	i = 0;
	if (!(retour = malloc(ft_strlen(s) + 1)))
		return (NULL);
	while (s[i])
	{
		retour[i] = (*f)(i, s[i]);
		i++;
	}
	retour[i] = 0;
	return (retour);
}
