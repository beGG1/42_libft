/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex_functions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshabali <sshabali@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 01:32:14 by sshabali          #+#    #+#             */
/*   Updated: 2025/01/04 10:16:34 by sshabali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	len_hex(unsigned long long n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		len++;
		n /= 16;
	}
	return (len);
}

static int	print_hex(int n, char a)
{
	char	*nbr;
	int		temp;

	nbr = int_to_hex(n, a);
	if (!nbr)
		return (-1);
	temp = print_string(nbr);
	free(nbr);
	return (temp);
}

int	print_hex_arg(int n, char c, int pr)
{
	if (pr)
		return (print_hex(n, c));
	return (len_hex((unsigned int)n));
}
