#include <stdio.h>

int	main()
{
	char	str[] = "abcde";
	str[2] = 'z';
	printf("strのなかみ: %s", str);
	getchar();
}
