/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshabali <sshabali@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:38:43 by sshabali          #+#    #+#             */
/*   Updated: 2024/11/14 14:38:45 by sshabali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*map;
	t_list	*temp;

	if (!lst)
		return (NULL);
	map = ft_lstnew(f(lst->content));
	if (!map)
		return (NULL);
	temp = map;
	lst = lst->next;
	while (lst)
	{
		map->next = ft_lstnew(f(lst->content));
		if (!(map->next))
		{
			ft_lstclear(&temp, del);
			return (0);
		}
		map = map->next;
		lst = lst->next;
	}
	return (temp);
}
