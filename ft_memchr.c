/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshabali <sshabali@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 19:15:05 by sshabali          #+#    #+#             */
/*   Updated: 2024/11/06 19:24:33 by sshabali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char			*str;
	size_t			i;
	unsigned char	ch;

	ch = (unsigned char)c;
	i = 0;
	str = (char *)s;
	while (i < n)
	{
		if ((unsigned char)str[i] == ch)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
