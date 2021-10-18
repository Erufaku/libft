/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasalaza <jasalaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 22:26:16 by jasalaza          #+#    #+#             */
/*   Updated: 2021/10/18 22:42:40 by jasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;
	char		*ls;
	char		*ld;

	d = dst;
	s = src;
	if ((dst == (void *)0) && (src == (void *)0))
		return (dst);
	if (d < s)
	{
		while (len--)
			*d++ = *s++;
	}
	else
	{
		ls = (char *)(s + (len - 1));
		ld = (char *)(d + (len - 1));
		while (len--)
			*ld-- = *ls--;
	}
	return (dst);
}
