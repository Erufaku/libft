#include "libft.h"
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
    char		*p;
    size_t		i;

    if (!s)
        return (NULL);
    p = (char *)malloc(len + 1);
    if (!p)
        return (NULL);
    if (start >= ft_strlen(s))
        return (ft_strdup(""));
    i = 0;
    while (i < len  && s[i + start] != '\0')
    {
        p[i] = s[i + start];
        i++;
    }
    p[i] = '\0';
    return (p);
}
