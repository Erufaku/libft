#include "libft.h"
int 	ft_find_c(char c, const char *set)
{
    int	i;
    int	flag;

    i = -1;
    flag = 0;
    while (set[++i])
        if (c == set[i])
            flag = 1;
    return (flag);
}
char 	*ft_strtrim(char const *s1, char const *set)
{
    char	*p;
    int 	i;
    int 	j;

    i = 0;
    j = ft_strlen(s1) - 1;
    if (*set == '\0')
        return ((char *)s1);
    p = (char *)malloc(ft_strlen(s1) + 1);
    if (!p)
        return (NULL);
    while(ft_find_c(s1[i], set))
        i++;
    while (ft_find_c(s1[j], set))
        j--;
    if (i == (int)ft_strlen(s1))
        return (ft_strdup(""));
    p = ft_substr(s1, i, j - i + 1);
    return (p);
}
