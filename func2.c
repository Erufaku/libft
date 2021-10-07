#include "libft.h"
size_t  ft_strlen(const char *c)
{
	int	i;
	
	i = 0;
	while (c[i] != '\0')
		i++;
	return (i);
}
void*	ft_memset(void *dest, int val, size_t len)
{
	char	*ptr;
	
	ptr = dest;
	while (len-- > 0)
		*ptr++ = val;
	return (dest);
}
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
void*	ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char		*d;
	const char	*s;
	
	d = dst;
	s = src;
    if ((dst == (void *)0) && (src == (void *)0))
        return (dst);
	while (n-- > 0)
		*d++ = *s++;
	return (dst);
}
void*	ft_memmove(void *dst, const void *src, size_t len)
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
