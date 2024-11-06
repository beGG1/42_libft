/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshabali <sshabali@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 18:23:05 by sshabali          #+#    #+#             */
/*   Updated: 2024/11/06 18:30:19 by sshabali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*ret;

	ret = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			ret = (char *)s + i;
		i++;
	}
	if (c == 0 && s[i] == '\0')
		ret = (char *)s + i;
	return (ret);
}
