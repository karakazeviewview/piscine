#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	*str1;
	char	*str2;

	str1 = "Hello";
	str2 = "Helloo";
	printf("c : %d\n", strncmp(str1, str2, 0));
	printf("ft : %d\n", ft_strncmp(str1, str2, 0));

}
