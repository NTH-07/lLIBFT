/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalabdal <nalabdal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:57:56 by nalabdal          #+#    #+#             */
/*   Updated: 2023/11/24 20:29:04 by nalabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(int i, int sign)
{
	if (i > 18 && sign < 0)
		return (0);
	else if (i > 18 && sign > 0)
		return (-1);
	else
		return (1);
}

int	ft_atoi(const char *nptr)
{
	int				sign;
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
		if (ft_check(i, sign) <= 0)
			return (ft_check(i, sign));
		x = x * 10 + (nptr[i] - 48);
		i++;
	}
	return (x * sign);
}
