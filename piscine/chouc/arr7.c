#include <stdio.h>

int	main(void)
{
	char	str[] = "abcde";
	str[2] = '\0';
	printf("strのなかみ: %s", str);
	getchar();
}
