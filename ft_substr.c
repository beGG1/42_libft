/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshabali <sshabali@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 13:43:07 by sshabali          #+#    #+#             */
/*   Updated: 2024/11/10 14:01:27 by sshabali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_malloc_size(char const *s, unsigned int start, size_t len)
{
	size_t	len_s;
	size_t	malloc_size;

	len_s = ft_strlen(s);
	if (len_s < start)
		malloc_size = 0;
	else if (len_s < start + len)
		malloc_size = len_s - start;
	else
		malloc_size = len;
	return (malloc_size);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*ptr;
	size_t		i;
	size_t		malloc_size;

	if (!s)
		return (NULL);
	malloc_size = ft_malloc_size(s, start, len);
	ptr = (char *)malloc(sizeof(char) * (malloc_size + 1));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	if (malloc_size > 0)
	{
		while (s[start] && i < len)
		{
			ptr[i] = s[start];
			start++;
			i++;
		}
	}
	ptr[i] = '\0';
	return (ptr);
}
