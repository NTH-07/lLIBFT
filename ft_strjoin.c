/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalabdal <nalabdal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 20:15:32 by nalabdal          #+#    #+#             */
/*   Updated: 2023/11/23 20:15:37 by nalabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_fill_rest(char const *s2, char *join, size_t i)
{
	size_t	j;

	j = 0;
	while (s2[j])
	{
		join[i] = s2[j];
		j++;
		i++;
	}
	join[i] = '\0';
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*join;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	i = 0;
	j = 0;
	join = (char *)malloc(sizeof(char) * (len + 1));
	if (!join)
		return (NULL);
	while (s1[j])
	{
		join[i] = s1[j];
		j++;
		i++;
	}
	ft_fill_rest(s2, join, i);
	return (join);
}
