#include "libft.h"
char*	ft_strrchr(const char *s, int c)
{
	char	*a;

	a = (char *)s;
	while (*a)
		(*a)++;
	while (*a != c)
		(*a)--;
	return (a);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
    int i;
    
    i = 0;
	if (n == 0)
		return (0);
	do
    {
		if (s1[i] != s2[i])
			return ((unsigned char *)s1 - (unsigned char *)s2);
		if (s1[i] == 0)
			break;
        i++;
	} while (n-- != 0);
	return (0);
}

void*	ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*a;

	a = (unsigned char *)s;
	while (n-- > 0) 
	{
		if (*a == c)
			return ((void *)a);
		(*a)++;
	}
	return (NULL);
}
int	memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*a1;
	unsigned char	*a2;

	a1 = (unsigned char *)s1;
	a2 = (unsigned char *)s2;
	if (n != 0)
	{
		do
		{
		if (*a1 != *a2)
			return (*a1 - *a2);
		(*a1)++;
		(*a2)++;
		} while (n-- != 0);
	}
    return (0);
}

char*	strnstr (const char *big, const char *little, size_t len)
{
	char	*res;
	int		i;

	res = (char *)big;
	i = 0;
	if (little[0] == '\0')
		return (res);
	do
	{
		if (ft_strncmp((const char *)res, little, ft_strlen(little)) == 0)
			return (res);
		(*res)++;
	} while(len-- > 0);
	return ((char *)'\0');
}
