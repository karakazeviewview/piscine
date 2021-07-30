#include <stdio.h>

int	main()
{
	int	count = 0;
	while (1)
	{
		if (count < 10)
		{
			printf("%d ", count);
			count++;
			continue;
		}
		break;
	}
	getchar();
}
