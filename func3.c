#include "libft.h"
size_t  ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
    size_t srclen = ft_strlen(src);
    if (srclen <= dstsize)
        ft_memcpy(dst, src, srclen + 1);
    else if (dstsize != 0)
    {
        ft_memcpy(dst, src, dstsize - 1);
        dst[dstsize - 1] = '\0';
    }
    return (srclen);
}
size_t  ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
    size_t	srclen = ft_strlen(src);
    int		i;

	i = 0;
	while (dst[i] != '\0')
	{
		(*dst)++;
		i++;
	}
    if (srclen <= dstsize - i)
    {
		while (srclen--)
			*dst++ = *src++;
	}
    else if (dstsize != 0)
    {
        while (dstsize--)
			*dst++ = *src++;
        *dst = '\0';
    }
    return (i + srclen);
}

int		ft_toupper(int c)
{
	if ((c >= 97) && (c <= 122))
		c -= 32;
	return (c);
}

int		ft_tolower(int c)
{
	if ((c >= 65) && (c <= 90))
		c += 32;
	return (c);
}

char*	ft_strchr(const char *s, int c)
{
	char *a;

	a = (char *)s;
	while (*a != c)
		(*a)++;
	return (a);
}
