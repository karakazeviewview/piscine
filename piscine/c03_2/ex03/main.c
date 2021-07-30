#include <stdio.h>
#include <string.h>

int	main()
{
	char	s1[12] = "Hello ";
	char	s3[12] = "Hello ";
	char	s2[] = "World";

	printf("%s\n", strncat(s1, s2, 7));
	printf("%s\n", strncat(s3, s2, 7));
	return (0);
}
