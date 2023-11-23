/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalabdal <nalabdal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:57:56 by nalabdal          #+#    #+#             */
/*   Updated: 2023/11/23 20:27:32 by nalabdal         ###   ########.fr       */
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
		if (i > 18 && sign < 0)
			return (0);
		x = x * 10 + c;
		i++;
	}
	return (x * sign);
}
