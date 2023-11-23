/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalabdal <nalabdal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 20:16:27 by nalabdal          #+#    #+#             */
/*   Updated: 2023/11/23 20:16:39 by nalabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	u;
	int		i;

	u = (char) c;
	i = ft_strlen(s);
	if (u == '\0')
		return ((char *)(s + i));
	i = i - 1;
	while (i >= 0)
	{
		if (s[i] == u)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
