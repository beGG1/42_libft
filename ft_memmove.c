/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshabali <sshabali@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:38:19 by sshabali          #+#    #+#             */
/*   Updated: 2024/11/05 13:38:39 by sshabali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*tmp;

	tmp = (char *)malloc(n);
	ft_memcpy(tmp, src, n);
	ft_memcpy(dest, tmp, n);
	free(tmp);
	return (dest);
}
