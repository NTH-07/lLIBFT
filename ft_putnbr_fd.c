/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalabdal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 20:55:26 by nalabdal          #+#    #+#             */
/*   Updated: 2023/11/02 20:55:56 by nalabdal         ###   ########.fr       */
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

static void	ft_w(int n, int fd)
{
	char	c;

	c = n + 48;
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	long long	len;

	if (fd < 0)
		return ;
	if (n == 0 || n == -2147483648)
	{
		if (n == 0)
			write(fd, "0", 1);
		else
			write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	len = ft_len(n);
	while (len >= 1)
	{
		ft_w((n / len), fd);
		n = n - (n / len) * len ;
		len /= 10;
	}
}
