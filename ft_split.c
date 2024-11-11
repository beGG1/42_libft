/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshabali <sshabali@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:00:00 by sshabali          #+#    #+#             */
/*   Updated: 2024/11/11 17:39:34 by sshabali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	counter;
	size_t	i;
	char	flag;

	i = 0;
	counter = 0;
	flag = 1;
	while (s[i])
	{
		if (s[i] != c && flag)
		{
			counter++;
			flag = 0;
		}
		if (s[i] == c && !flag)
			flag = 1;
		i++;
	}
	return (counter);
}

static char	*ft_strndup(char const *s, size_t len)
{
	char	*word;

	word = (char *)malloc(sizeof(char) * (len + 1));
	if (word == NULL)
		return (NULL);
	ft_strlcpy(word, s, len);
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	**ret;

	ret = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (ret == NULL)
		return (NULL);
	i = 0;
	k = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i] != '\0')
		{
			j++;
			i++;
		}
		if (j > 0)
			ret[k++] = ft_strndup(s + i, j);
	}
	ret[k] = NULL;
	return (ret);
}
