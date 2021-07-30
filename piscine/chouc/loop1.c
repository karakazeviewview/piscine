#include <stdio.h>

int	main()
{
	int	loopX = 10;
	int	loopY = 10;
	for (int	x = 0; x < loopX; x++)
	{
		printf("外側ループ開始\n");
		for (int	y = 0; y < loopY; y++)
		{
			printf("内側ループ開始\n");
			x = loopX;
			y = loopY;
		}
	}
	printf("プログラム終了\n");
	getchar();
}
