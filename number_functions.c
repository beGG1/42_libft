/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshabali <sshabali@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 01:32:28 by sshabali          #+#    #+#             */
/*   Updated: 2025/01/04 10:16:34 by sshabali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_numlen_print(int n)
{
	int	len;

	if (n <= 0)
		len = 1;
	else
		len = 0;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static int	print_int(int n)
{
	char	*nbr;
	int		temp;

	nbr = ft_itoa_print(n);
	if (!nbr)
		return (-1);
	temp = print_string(nbr);
	free(nbr);
	return (temp);
}

int	print_int_arg(int n, int pr)
{
	if (pr)
		return (print_int(n));
	return (ft_numlen_print(n));
}
