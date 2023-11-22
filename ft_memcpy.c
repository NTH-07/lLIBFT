/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalabdal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:54:00 by nalabdal          #+#    #+#             */
/*   Updated: 2023/11/02 11:55:59 by nalabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*t_dst;
	unsigned char	*t_src;

	i = 0;
	if (src == dest)
		return (dest);
	t_dst = (unsigned char *)dest;
	t_src = (unsigned char *)src;
	while (i < n)
	{
		t_dst[i] = t_src[i];
		i++;
	}
	return (dest);
}
