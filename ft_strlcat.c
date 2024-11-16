/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshabali <sshabali@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:23:38 by sshabali          #+#    #+#             */
/*   Updated: 2024/11/07 18:08:07 by sshabali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d;
	size_t	s;

	d = 0;
	while (dst[d] && d < size)
		d++;
	s = 0;
	while (src[s] && (d + s + 1) < size)
	{
		dst[d + s] = src[s];
		s++;
	}
	if (d != size)
		dst[d + s] = '\0';
	return (d + ft_strlen(src));
}
