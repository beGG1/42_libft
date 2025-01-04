/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshabali <sshabali@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 01:32:42 by sshabali          #+#    #+#             */
/*   Updated: 2025/01/04 10:16:34 by sshabali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	print_format(char c, va_list args, int pr)
{
	if (c == 'c' && pr)
		return (print_char(va_arg(args, int)));
	if (c == 's')
		return (print_str_arg(va_arg(args, char *), pr));
	if (c == '%' && pr)
		return (write(1, "%", 1));
	if (c == 'i' || c == 'd')
		return (print_int_arg(va_arg(args, int), pr));
	if (c == 'u')
		return (print_uint_arg(va_arg(args, int), pr));
	if (c == 'x')
		return (print_hex_arg(va_arg(args, int), 'a', pr));
	if (c == 'X')
		return (print_hex_arg(va_arg(args, int), 'A', pr));
	if (c == 'p')
		return (print_ptr_arg(va_arg(args, void *), pr));
	return (1);
}
