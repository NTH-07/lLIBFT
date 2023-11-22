/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalabdal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:57:56 by nalabdal          #+#    #+#             */
/*   Updated: 2023/11/04 18:06:29 by nalabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int				sign;
	int				c;
	size_t			i;
	unsigned long	x;

	i = 0;
	x = 0;
	sign = 1;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if ((nptr[i] == '-') || (nptr[i] == '+'))
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	if (nptr[i] <= '0' && nptr[i] >= '9')
		return (0);
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		c = nptr[i] - 48;
		x = x * 10 + c;
		i++;
	}
	return (x * sign);
}
