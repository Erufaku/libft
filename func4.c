#include "libft.h"
char*	ft_strrchr(const char *s, int c)
{
	char	*a;
    int     i;

    i = 0;
	a = (char *)s;
	while (*a != '\0')
    {
        a++;
        i++;
    }
	while (*a != c && i > 0)
    {
        a--;
        i--;
    }
    if (*a == c)
	    return (a);
    else
        return (NULL);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
    int i;
    
    i = 0;
	if (n == 0)
		return (0);
    while (n - i != 0)
    {
		if ((s1[i] != s2[i]) || (s2[i] == '\0') || (s1[i] == '\0'))
            return ((unsigned char)s1[i] - (unsigned char)s2[i]);
        i++;
	}
	return (0);
}

void*	ft_memchr(const void *s, int c, size_t n)
{
    unsigned char	*a;

    a = (unsigned char *)s;
    while (n--)
        if (*a != (unsigned char)c)
            a++;
        else
            return (a);
    return (NULL);
}
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*a1;
	unsigned char	*a2;

	a1 = (unsigned char *)s1;
	a2 = (unsigned char *)s2;
	if (n)
	{
		while (n--)
		{
		if (*a1 != *a2)
			return (*a1 - *a2);
		a1++;
		a2++;
		}
	}
    return (0);
}
