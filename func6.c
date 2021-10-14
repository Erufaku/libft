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
char 	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	int 	i;

	i = ft_strlen(s1) + ft_strlen(s2);
	if (!s1 && !s2)
		return (NULL);
	p = (char *)malloc(i + 1);
	if (!p)
		return (NULL);
	ft_strlcpy(p, s1, ft_strlen(s1) + 1);
	ft_strlcat(p, s2, i + 1);
	return (p);
}
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