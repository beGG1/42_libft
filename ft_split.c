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
	ft_strlcpy(word, s, len + 1);
	return (word);
}

static void	*free_split(char **split, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		free(split[i]);
		i++;
	}
	free(split);
	return (NULL);
}

static int	get_end_word(char const *s, char c, int i)
{
	size_t	j;

	j = 0;
	while (s[i + j] && s[i + j] != c)
		j++;
	return (j);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	k;
	char	**ret;

	if (!s)
		return (NULL);
	ret = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!ret)
		return (NULL);
	i = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (get_end_word(s, c, i))
		{
			ret[k] = ft_strndup(s + i, get_end_word(s, c, i));
			if (!ret[k++])
				return (free_split(ret, k - 1));
		}
		i += get_end_word(s, c, i);
	}
	ret[k] = NULL;
	return (ret);
}
