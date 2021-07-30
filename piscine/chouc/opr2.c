#include <stdio.h>

int	main()
{
	char	str[] = "AB";
	int	length = sizeof(str) - 1;

	if (!(length >= 3))
	{
		printf("strは3文字未満");
	}
	else
	{
		printf("strは3文字以上");
	}
	getchar();
}
