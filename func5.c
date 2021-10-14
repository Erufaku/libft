#include "libft.h"
int	ft_atoi(const char *str)
{
	int	sgn;
	int	num;
    int i;

	sgn = 1;
	num = 0;
    i = 0;
	while ((*str == ' ') || (*str == '\t') || (*str == '\n')
		|| (*str == '\v') || (*str == '\f') || (*str == '\r'))
		str++;
	if (*str == '-')
		sgn = -1;
	if ((*str == '+') || (*str == '-'))
		str++;
	while (ft_isdigit(*str))
	{
		num = (num * 10) + ((int)(*str) - '0');
		str++;
        i++;
	}
    if (num == -2147483648)
        return (num);
    if (i >= 20)
        return (sgn == -1 ? 0 : -1);
	return (num * sgn);
}
char*	ft_strnstr(const char *big, const char *little, size_t len)
{
    char	*res;
    int		i;

    res = (char *)big;
    i = 0;
    if (*little == '\0')
        return (res);
    while (len-- && *res != '\0')
    {
        if (ft_strncmp((const char *)res, little, ft_strlen(little)) == 0)
            return (res);
        res++;
        if (ft_strlen(little) > len)
            return (NULL);
    }
    return (NULL);
}
void*   ft_calloc(size_t count, size_t size)
{
    void	*p;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	p = malloc(count * size);
	if (p) ft_bzero(p, count * size);
	return (p);
}
char*	ft_strdup(const char *s1)
{
	char	*p;

	p = (char *)malloc(ft_strlen((s1)) + 1);
	if (!p)
		return (NULL);
	ft_strlcpy(p, s1, ft_strlen(s1));
	return (p);
}
