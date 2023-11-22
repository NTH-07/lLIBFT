/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalabdal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:06:26 by nalabdal          #+#    #+#             */
/*   Updated: 2023/11/05 00:25:17 by nalabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long int	ft_len(int n)
{
	long int	max;

	max = 1;
	while (n >= max)
		max *= 10;
	max /= 10;
	return (max);
}

static long int	ft_count(int n)
{
	long int	max;
	int			count;

	max = 1;
	count = 0;
	while (n >= max)
	{
		max *= 10;
		count++;
	}
	return (count);
}

static void	ft_fill(int n, long int len, int sign, char *itoa)
{
	int	i;

	i = 0;
	while (len >= 1)
	{
		if (sign == -1)
		{
			itoa[i] = '-';
			sign = 1;
			i++;
		}
		itoa[i] = (n / len) + 48;
		n = n - (n / len) * len ;
		len /= 10;
		i++;
	}
	itoa[i] = '\0';
}

char	*ft_itoa(int n)
{
	char		*itoa;
	int			sign;
	int			count;
	long int	len;

	sign = 1;
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		sign = -1;
		n = -n;
	}
	len = ft_len(n);
	count = ft_count(n);
	if (sign == -1)
		itoa = (char *)malloc(sizeof(char) * (count + 2));
	else
		itoa = (char *)malloc(sizeof(char) * (count + 1));
	if (!itoa)
		return (0);
	ft_fill(n, len, sign, itoa);
	return (itoa);
}
