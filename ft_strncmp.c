/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshabali <sshabali@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 18:41:45 by sshabali          #+#    #+#             */
/*   Updated: 2024/11/06 18:48:56 by sshabali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	len;

	len = 1;
	if (n == 0)
	{
		return (0);
	}
	while ((*s1 && (*s1 == *s2)) && len < n)
	{
		s1++;
		s2++;
		len++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
