#include "../includes/utils.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && *((unsigned char *)s1 + i) == *((unsigned char *)s2 + i))
		i++;
	if (i == n)
		return (0);
	else
		return (*((unsigned char *)s1 + i) - *((unsigned char *)s2 + i));
}

/*int	main()
{
	char s[] = {-128, 0, 127, 0};
	char sCpy[] = {-128, 0, 127, 0};
	//char s2[] = {0, 0, 127, 0};
	//char s3[] = {0, 0, 42, 0};

	printf("Value Function C = %i\n", memcmp(s, sCpy, 4));
	printf("Value Function Mano = %i\n", ft_memcmp(s, sCpy, 4));
}*/
