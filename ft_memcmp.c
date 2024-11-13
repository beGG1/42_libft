/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshabali <sshabali@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:37:26 by sshabali          #+#    #+#             */
/*   Updated: 2024/11/07 16:44:00 by sshabali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			len;
	unsigned char	*ps1;
	unsigned char	*ps2;

	ps1 = (unsigned char *)s1;
	ps2 = (unsigned char *)s2;
	len = 1;
	if (n == 0)
	{
		return (0);
	}
	while ((*ps1 && (*ps1 == *ps2)) && len < n)
	{
		ps1++;
		ps2++;
		len++;
	}
	return (*ps1 - *ps2);
}
