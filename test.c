#include "ft_split.c"
#include <stdio.h>
int main(void)
{
	int k = -1;
	while (++k < 26)
		printf("%s\n", ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'i')[k]);
	return (0);
}