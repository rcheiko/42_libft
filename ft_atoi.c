/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 13:21:25 by rcheiko           #+#    #+#             */
/*   Updated: 2021/01/28 10:23:04 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isspace(int c)
{
	if (c == ' ' || c == '\t' || c == '\n'
						|| c == '\v' || c == '\f' || c == '\r')
		return (1);
	return (0);
}

int			ft_atoi(const char *str)
{
	int i;
	int resultat;
	int sign;

	i = 0;
	resultat = 0;
	sign = 1;
	while (isspace(str[i]) == 1)
		i++;
	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (ft_isdigit(str[i]) == 1)
	{
		resultat = resultat * 10 + (str[i] - '0');
		i++;
	}
	return (resultat * sign);
}
