/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshabali <sshabali@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:20:10 by sshabali          #+#    #+#             */
/*   Updated: 2024/11/14 14:20:13 by sshabali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	if (!lst || !(*lst))
		return ;
	ft_lstclear(&(*lst)->next, del);
	if (del)
		(*del)((*lst)->content);
	free(*lst);
	*lst = 0;
}
