#include <stdio.h>

void	loop()
{
	while (1)
	{
		printf("外側ループ開始\n");
		while (1)
		{
			printf("内側ループ開始\n");
			return;
		}
	}
}

int	main()
{
	loop();
	printf("プログラム終了\n");
	getchar();
}
