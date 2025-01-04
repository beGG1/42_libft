/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshabali <sshabali@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 02:22:30 by sshabali          #+#    #+#             */
/*   Updated: 2025/01/04 10:16:34 by sshabali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	not_percent(const char *str, int i, int pr)
{
	if (pr)
	{
		if (write(1, &str[i], 1) < 1)
			return (-1);
	}
	return (1);
}

static int	percent_met(const char *str, int *i, va_list args, int *pr)
{
	int	temp;
	int	out;

	temp = 0;
	out = 0;
	if (in_set_print(str[*i + 1], "idscupxX%%"))
		temp = print_format(str[*i + 1], args, *pr);
	if (temp < 0)
	{
		if (str[*i + 1] != 'c')
			return (-1);
		*pr = 0;
		out += 2;
	}
	out += temp;
	*i = *i + 1;
	return (out);
}

static int	ft_print(const char *str, va_list args, int pr)
{
	int	i;
	int	out;
	int	temp;

	i = 0;
	out = 0;
	while (str[i])
	{
		if (str[i] != '%')
		{
			temp = not_percent(str, i, pr);
			if (temp < 1)
				return (-1);
			out++;
		}
		else
		{
			temp = percent_met(str, &i, args, &pr);
			if (temp < 0)
				return (out);
			out += temp;
		}
		i++;
	}
	return (out);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		error;

	va_start(args, str);
	error = ft_print(str, args, 1);
	va_end(args);
	return (error);
}
