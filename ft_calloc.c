/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchtaibi <zchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:03:26 by nalabdal          #+#    #+#             */
/*   Updated: 2023/11/19 19:07:38 by zchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*t;

	if (!nmemb && !size && nmemb >= __SIZE_MAX__ / size)
		return (NULL);
	t = (void *)malloc(nmemb * size);
	if (!t)
		return (NULL);
	ft_bzero(t, nmemb * size);
	return (t);
}
