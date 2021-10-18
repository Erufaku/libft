/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasalaza <jasalaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 22:25:19 by jasalaza          #+#    #+#             */
/*   Updated: 2021/10/18 22:34:02 by jasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strrchr(const char *s, int c)
{	
	char	*a;
	int		i;

	i = 0;
	a = (char *)s;
	while (*a != '\0')
	{
		a++;
		i++;
	}
	while (*a != (char)c && i > 0)
	{
		a--;
		i--;
	}
	if (*a == (char)c)
		return (a);
	else
		return (NULL);
}
