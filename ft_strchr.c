/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchtaibi <zchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:36:59 by nalabdal          #+#    #+#             */
/*   Updated: 2023/11/19 18:58:16 by zchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	u;
	size_t	i;

	u = (char) c;
	i = 0;
	if (u == '\0')
		return ((char *)(s + ft_strlen(s)));
	if (!s)
		return (NULL);
	while (s[i])
	{
		if (s[i] == u)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
