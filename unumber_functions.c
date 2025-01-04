/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unumber_functions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshabali <sshabali@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 01:33:08 by sshabali          #+#    #+#             */
/*   Updated: 2025/01/04 10:16:34 by sshabali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_unumlen(unsigned int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static int	print_uint(unsigned int n)
{
	char	*nbr;
	int		temp;

	nbr = ft_utoa(n);
	if (!nbr)
		return (-1);
	temp = print_string(nbr);
	free(nbr);
	return (temp);
}

int	print_uint_arg(int n, int pr)
{
	if (pr)
		return (print_uint((unsigned int)n));
	return (ft_unumlen((unsigned int)n));
}
