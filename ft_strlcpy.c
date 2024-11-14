/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshabali <sshabali@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:36:01 by sshabali          #+#    #+#             */
/*   Updated: 2024/11/06 17:41:46 by sshabali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	to_copy;
	size_t	i;

	src_len = ft_strlen(src);
	if (size != 0)
	{
		if (src_len < size)
			to_copy = src_len;
		else
			to_copy = size - 1;
		i = 0;
		while (i < to_copy)
		{
			dst[i] = src[i];
			i++;
		}
		dst[to_copy] = '\0';
	}
	return (src_len);
}
