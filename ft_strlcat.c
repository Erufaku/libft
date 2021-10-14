#include "libft.h"
size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t		i;
    size_t      j;

    i = 0;
    j = 0;
    while (dst[i] != '\0' && dstsize > i)
        i++;
    /*if (dstsize + 1 == 0)
    {
        ft_memcpy(dst + i, src, ft_strlen(src) + 1);
        return (i + ft_strlen(src));
    }*/
    if (dstsize > i && (int)dstsize > 0)
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
