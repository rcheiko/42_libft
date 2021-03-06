/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 11:07:14 by rcheiko           #+#    #+#             */
/*   Updated: 2021/01/28 10:22:04 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

static int	size_int(int a)
{
	int res;

	res = 0;
	if (a < 0)
		res++;
	if (a == -0)
		return (1);
	while (a)
	{
		a /= 10;
		res++;
	}
	return (res);
}

static char	*ft_rev(char *str)
{
	size_t	i;
	size_t	n;
	char	temp;

	n = ft_strlen(str);
	i = 0;
	while (n > i)
	{
		n--;
		temp = str[n];
		str[n] = str[i];
		str[i] = temp;
		i++;
	}
	return (str);
}

char		*ft_itoa(int n)
{
	char		*re;
	int			i;
	int			signe;
	long int	nb;

	i = 0;
	nb = n;
	if (!(re = malloc(sizeof(char) * size_int(nb) + 1)))
		return (NULL);
	if ((signe = 0) != nb == 0)
		re[i++] = '0';
	if (nb < 0)
	{
		nb = -nb;
		signe = -1;
	}
	while (nb > 0)
	{
		re[i++] = (nb % 10) + '0';
		nb = nb / 10;
	}
	if (signe == -1)
		re[i++] = '-';
	re[i] = '\0';
	return (ft_rev(re));
}
