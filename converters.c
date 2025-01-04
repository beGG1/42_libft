/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converters.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshabali <sshabali@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 22:33:57 by sshabali          #+#    #+#             */
/*   Updated: 2025/01/04 10:16:34 by sshabali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*int_to_hex(int num, char a)
{
	unsigned int	n;
	int				max_digits;
	char			*hex ;
	int				digit;

	n = (unsigned int)num;
	max_digits = len_hex(n);
	hex = malloc(max_digits + 1);
	if (!hex)
		return (NULL);
	hex[max_digits] = '\0';
	while (max_digits > 0)
	{
		max_digits--;
		digit = n % 16;
		if (digit < 10)
			hex[max_digits] = (digit) + '0';
		else
			hex[max_digits] = (digit % 10) + a;
		n /= 16;
	}
	return (hex);
}

char	*ulong_to_hex(unsigned long num, char a)
{
	unsigned long	n;
	int				max_digits;
	char			*hex ;
	int				digit;

	n = (unsigned long)num;
	max_digits = len_hex(n);
	hex = malloc(max_digits + 1);
	if (!hex)
		return (NULL);
	hex[max_digits] = '\0';
	while (max_digits > 0)
	{
		max_digits--;
		digit = n % 16;
		if (digit < 10)
			hex[max_digits] = (digit) + '0';
		else
			hex[max_digits] = (digit % 10) + a;
		n /= 16;
	}
	return (hex);
}

char	*ft_utoa(unsigned int n)
{
	char		*str;
	int			len;

	len = ft_unumlen(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	while (len > 0)
	{
		len--;
		str[len] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}

char	*ft_itoa_print(int n)
{
	long	num;
	char	*str;
	int		len;
	int		i;

	len = ft_numlen_print(n);
	num = n;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	if (n < 0)
	{
		str[i] = '-';
		i++;
		num = -num;
	}
	str[len] = '\0';
	while (len > i)
	{
		len--;
		str[len] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}
