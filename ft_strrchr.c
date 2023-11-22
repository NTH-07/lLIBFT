/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchtaibi <zchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:40:24 by nalabdal          #+#    #+#             */
/*   Updated: 2023/11/19 19:10:26 by zchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	u;
	int		i;

	u = (char) c;
	i = ft_strlen(s);
	if (!s)
		return (NULL);
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
