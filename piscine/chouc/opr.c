#include <stdio.h>

int	main()
{
	char	str1[] = "abcde";
	char	str2[] = "fghij";
	int	length1 = sizeof(str1) - 1;
	int	length2 = sizeof(str2) - 1;

	if (length1 >= 3 && length2 >= 3)
	{
		printf("両方3文字以上");
	}
	else
	{
		printf("どちらか、または両方が3文字未満");
	}
	getchar();
}
