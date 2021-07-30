#include <stdio.h>
#include <string.h>
int	main()
{
	char	s1[7] = "Hello";
	char	s3[7] = "Hello";
	char	s2[] = "World";
	unsigned int	num1 = ft_strlcat(s1, s2, 7);
	unsigned int	num2 = strlcat(s3, s2, 7);
	printf("%s:%u\nc", s1, num1);
	printf("%s:%u", s3, num2);
}
