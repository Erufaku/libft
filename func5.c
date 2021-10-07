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