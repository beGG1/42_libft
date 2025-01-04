/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ptr_functions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshabali <sshabali@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 20:16:57 by sshabali          #+#    #+#             */
/*   Updated: 2025/01/04 10:16:34 by sshabali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	print_address(void	*ptr)
{
	char	*addr;
	char	buffer[18];
	int		pos;
	int		i;

	buffer[0] = '0';
	buffer[1] = 'x';
	addr = ulong_to_hex((unsigned long)ptr, 'a');
	pos = 2;
	i = 0;
	while (addr[i])
		buffer[pos++] = addr[i++];
	buffer[pos] = '\0';
	free(addr);
	return (print_string(buffer));
}

int	print_ptr_arg(void *ptr, int pr)
{
	if (ptr == NULL)
	{
		if (pr)
			return (print_string("(nil)"));
		return (str_len("(nil)"));
	}
	if (pr)
		return (print_address(ptr));
	return (17);
}
