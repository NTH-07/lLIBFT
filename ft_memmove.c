/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalabdal <nalabdal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:05:46 by nalabdal          #+#    #+#             */
/*   Updated: 2023/11/23 20:15:20 by nalabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*t_dst;
	unsigned char	*t_src;
	int				i;

	i = 0;
	t_dst = (unsigned char *)dest;
	t_src = (unsigned char *)src;
	if (!src && !dest)
		return (NULL);
	if (dest < src || dest > src + n)
		return (ft_memcpy(dest, src, n));
	else
	{
		i = n - 1;
		while (src && i >= 0)
		{
			t_dst[i] = t_src[i];
			i--;
		}
	}
	return (dest);
}
