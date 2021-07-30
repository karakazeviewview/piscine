#include <stdio.h>

int	main()
{
	char	str[] = "abcde";
	int	length = sizeof(str) - 1;

	if (length >= 6)
	{
		printf("strは6文字以上です");
	}
	else if (length >= 3)
	{
		printf("strは3文字以上です");
	}
	else
	{
		printf("strは3文字未満です");
	}
	getchar();
}
