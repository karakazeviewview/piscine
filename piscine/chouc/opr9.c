#include <stdio.h>

int	main()
{
	int	c;

	while ((c = getchar()) != '\n')
		printf("%c", c);

	getchar();
}
