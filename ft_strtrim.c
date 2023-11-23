/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalabdal <nalabdal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:22:30 by nalabdal          #+#    #+#             */
/*   Updated: 2023/11/23 20:15:20 by nalabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(char c, char const *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*trim;

	if (!s1)
		return (NULL);
	if (!set || ft_strlen(set) == 0)
		return (ft_strdup(s1));
	i = 0;
	j = ft_strlen(s1) - 1;
	while (s1[i] && ft_check(s1[i], set) == 1)
		i++;
	while (s1[j] && ft_check(s1[j], set) == 1)
		j--;
	if (!s1[i] || !s1[j])
		return (ft_strdup(""));
	trim = (char *)malloc(sizeof(char) * (j - i + 2));
	if (!trim)
		return (NULL);
	ft_strlcpy(trim, s1 + i, j - i + 2);
	return (trim);
}
