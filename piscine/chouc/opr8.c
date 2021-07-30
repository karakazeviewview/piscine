#include <stdio.h>

int	main()
{
	int	c;

	c = getchar();
	printf("%c\n", c);

	while (getchar() != '\n');

	getchar();
}
