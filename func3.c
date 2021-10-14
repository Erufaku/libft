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
    size_t		i;
    size_t      j;

	i = 0;
    j = 0;
	while (dst[i] != '\0' && dstsize > i)
		i++;
    if (dstsize > i)
    {
        while (dstsize - i - 1 > j)
        {
            dst[i + j] = src[j];
            j++;
        }
        dst[i + j] = '\0';
    }
    return (i + ft_strlen(src));
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
	char	*a;
	int		i;

	i = 0;
	a = (char *)s;
	while (a[i] != c && a[i] != '\0')
		i++;
    if (a[i] == c)
        return (a+i);
    else
        return (NULL);
}
