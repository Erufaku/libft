/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasalaza <jasalaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 22:26:31 by jasalaza          #+#    #+#             */
/*   Updated: 2021/10/18 22:55:21 by jasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_elem;
	t_list	*first_elem;

	if (lst)
	{
		new_elem = ft_lstnew(f(lst->content));
		if (!new_elem)
			return (NULL);
		first_elem = new_elem;
		new_lst = first_elem;
		while (lst)
		{
			new_elem = ft_lstnew(f(lst->content));
			if (!new_elem)
			{
				ft_lstclear(&first_elem, del);
				return (NULL);
			}
			ft_lstadd_back(&first_elem, new_elem);
			lst = lst->next;
		}
		return (first_elem);
	}
	return (NULL);
}
