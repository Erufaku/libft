/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasalaza <jasalaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 22:26:40 by jasalaza          #+#    #+#             */
/*   Updated: 2021/10/18 22:46:21 by jasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*d;
	t_list	*enter;

	enter = (*lst);
	while (enter)
	{
		d = enter->next;
		if (del)
			del(enter->content);
		free(enter);
		enter = d;
	}
	*lst = NULL;
}
