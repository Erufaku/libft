#include "libft.h"
#include "stdlib.h"
int ft_isalpha(int c)
{
    if (((c >= 65) && (c <= 90)) || ((c >= 97) && (c <= 122)))
        return (1);
    else
        return (0);
}
int ft_isdigit(int c)
{
    if ((c >= '0') && (c <= '9'))
        return (1);
    else
        return (0);
}
int ft_isalnum(int c)
{
    return (ft_isalpha(c) || ft_isdigit(c));
}
int ft_isascii(int c)
{
    if ((c >= 0) && (c <= 127))
        return (1);
    else
        return (0);
}
int ft_isprint(int c)
{
    if ((c >= 32) && (c <= 126))
        return (1);
    else
        return (0);
}