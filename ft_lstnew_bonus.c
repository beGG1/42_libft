/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshabali <sshabali@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 13:34:17 by sshabali          #+#    #+#             */
/*   Updated: 2024/11/14 13:34:19 by sshabali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list		*new;

	new = (t_list *)malloc(sizeof(*new) * 1);
	if (new == NULL)
		return (NULL);
	new->content = (void *)content;
	new->next = 0;
	return (new);
}
